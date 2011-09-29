/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* NetworkManager -- Network link manager
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2005 - 2011 Red Hat, Inc.
 * Copyright (C) 2006 - 2008 Novell, Inc.
 */

#include <config.h>
#include <string.h>
#include <glib.h>

#include "wifi-utils.h"
#include "wifi-utils-private.h"
#include "wifi-utils-wext.h"

gpointer
wifi_data_new (const char *iface, int ifindex, gsize len)
{
	WifiData *data;

	data = g_malloc0 (len);
	data->iface = g_strdup (iface);
	data->ifindex = ifindex;
	return data;
}

void
wifi_data_free (WifiData *data)
{
	g_free (data->iface);
	memset (data, 0, sizeof (*data));
	g_free (data);
}

/***************************************************************/

WifiData *
wifi_utils_init (const char *iface, int ifindex)
{
	g_return_val_if_fail (iface != NULL, NULL);
	g_return_val_if_fail (ifindex > 0, NULL);

	/* Determine WEXT vs. nl80211 here */

	return wifi_wext_init (iface, ifindex);
}

NMDeviceWifiCapabilities
wifi_utils_get_caps (WifiData *data)
{
	g_return_val_if_fail (data != NULL, NM_WIFI_DEVICE_CAP_NONE);

	return data->caps;	
}

gboolean
wifi_utils_can_scan_ssid (WifiData *data)
{
	g_return_val_if_fail (data != NULL, FALSE);
	return data->can_scan_ssid;
}

NM80211Mode
wifi_utils_get_mode (WifiData *data)
{
	g_return_val_if_fail (data != NULL, NM_802_11_MODE_UNKNOWN);
	return data->get_mode (data);
}

gboolean
wifi_utils_set_mode (WifiData *data, const NM80211Mode mode)
{
	g_return_val_if_fail (data != NULL, FALSE);
	g_return_val_if_fail ((mode == NM_802_11_MODE_INFRA) || (mode == NM_802_11_MODE_ADHOC), FALSE);

	/* nl80211 probably doesn't need this */
	if (data->set_mode)
		return data->set_mode (data, mode);
	return TRUE;
}

guint32
wifi_utils_get_freq (WifiData *data)
{
	g_return_val_if_fail (data != NULL, 0);
	return data->get_freq (data);
}

guint32
wifi_utils_find_freq (WifiData *data, const guint32 *freqs)
{
	g_return_val_if_fail (data != NULL, 0);
	g_return_val_if_fail (freqs != NULL, 0);
	return data->find_freq (data, freqs);
}

GByteArray *
wifi_utils_get_ssid (WifiData *data)
{
	g_return_val_if_fail (data != NULL, NULL);
	return data->get_ssid (data);
}

gboolean
wifi_utils_get_bssid (WifiData *data, struct ether_addr *out_bssid)
{
	g_return_val_if_fail (data != NULL, FALSE);
	g_return_val_if_fail (out_bssid != NULL, FALSE);

	memset (out_bssid, 0, sizeof (*out_bssid));
	return data->get_bssid (data, out_bssid);
}

guint32
wifi_utils_get_rate (WifiData *data)
{
	g_return_val_if_fail (data != NULL, 0);
	return data->get_rate (data);
}

int
wifi_utils_get_qual (WifiData *data)
{
	g_return_val_if_fail (data != NULL, 0);
	return data->get_qual (data);
}

void
wifi_utils_deinit (WifiData *data)
{
	g_return_if_fail (data != NULL);
	data->deinit (data);
	wifi_data_free (data);
}
