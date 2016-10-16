/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NMDBUS_VPN_CONNECTION_H__
#define __NMDBUS_VPN_CONNECTION_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.VPN.Connection */

#define NMDBUS_TYPE_VPN_CONNECTION (nmdbus_vpn_connection_get_type ())
#define NMDBUS_VPN_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_VPN_CONNECTION, NMDBusVpnConnection))
#define NMDBUS_IS_VPN_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_VPN_CONNECTION))
#define NMDBUS_VPN_CONNECTION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_VPN_CONNECTION, NMDBusVpnConnectionIface))

struct _NMDBusVpnConnection;
typedef struct _NMDBusVpnConnection NMDBusVpnConnection;
typedef struct _NMDBusVpnConnectionIface NMDBusVpnConnectionIface;

struct _NMDBusVpnConnectionIface
{
  GTypeInterface parent_iface;


  const gchar * (*get_banner) (NMDBusVpnConnection *object);

  guint  (*get_vpn_state) (NMDBusVpnConnection *object);

  void (*properties_changed) (
    NMDBusVpnConnection *object,
    GVariant *arg_properties);

  void (*vpn_state_changed) (
    NMDBusVpnConnection *object,
    guint arg_state,
    guint arg_reason);

};

GType nmdbus_vpn_connection_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_vpn_connection_interface_info (void);
guint nmdbus_vpn_connection_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void nmdbus_vpn_connection_emit_properties_changed (
    NMDBusVpnConnection *object,
    GVariant *arg_properties);

void nmdbus_vpn_connection_emit_vpn_state_changed (
    NMDBusVpnConnection *object,
    guint arg_state,
    guint arg_reason);



/* D-Bus property accessors: */
guint nmdbus_vpn_connection_get_vpn_state (NMDBusVpnConnection *object);
void nmdbus_vpn_connection_set_vpn_state (NMDBusVpnConnection *object, guint value);

const gchar *nmdbus_vpn_connection_get_banner (NMDBusVpnConnection *object);
gchar *nmdbus_vpn_connection_dup_banner (NMDBusVpnConnection *object);
void nmdbus_vpn_connection_set_banner (NMDBusVpnConnection *object, const gchar *value);


/* ---- */

#define NMDBUS_TYPE_VPN_CONNECTION_PROXY (nmdbus_vpn_connection_proxy_get_type ())
#define NMDBUS_VPN_CONNECTION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_VPN_CONNECTION_PROXY, NMDBusVpnConnectionProxy))
#define NMDBUS_VPN_CONNECTION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_VPN_CONNECTION_PROXY, NMDBusVpnConnectionProxyClass))
#define NMDBUS_VPN_CONNECTION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_VPN_CONNECTION_PROXY, NMDBusVpnConnectionProxyClass))
#define NMDBUS_IS_VPN_CONNECTION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_VPN_CONNECTION_PROXY))
#define NMDBUS_IS_VPN_CONNECTION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_VPN_CONNECTION_PROXY))

typedef struct _NMDBusVpnConnectionProxy NMDBusVpnConnectionProxy;
typedef struct _NMDBusVpnConnectionProxyClass NMDBusVpnConnectionProxyClass;
typedef struct _NMDBusVpnConnectionProxyPrivate NMDBusVpnConnectionProxyPrivate;

struct _NMDBusVpnConnectionProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusVpnConnectionProxyPrivate *priv;
};

struct _NMDBusVpnConnectionProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_vpn_connection_proxy_get_type (void) G_GNUC_CONST;

void nmdbus_vpn_connection_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusVpnConnection *nmdbus_vpn_connection_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusVpnConnection *nmdbus_vpn_connection_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_vpn_connection_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusVpnConnection *nmdbus_vpn_connection_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusVpnConnection *nmdbus_vpn_connection_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_VPN_CONNECTION_SKELETON (nmdbus_vpn_connection_skeleton_get_type ())
#define NMDBUS_VPN_CONNECTION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_VPN_CONNECTION_SKELETON, NMDBusVpnConnectionSkeleton))
#define NMDBUS_VPN_CONNECTION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_VPN_CONNECTION_SKELETON, NMDBusVpnConnectionSkeletonClass))
#define NMDBUS_VPN_CONNECTION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_VPN_CONNECTION_SKELETON, NMDBusVpnConnectionSkeletonClass))
#define NMDBUS_IS_VPN_CONNECTION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_VPN_CONNECTION_SKELETON))
#define NMDBUS_IS_VPN_CONNECTION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_VPN_CONNECTION_SKELETON))

typedef struct _NMDBusVpnConnectionSkeleton NMDBusVpnConnectionSkeleton;
typedef struct _NMDBusVpnConnectionSkeletonClass NMDBusVpnConnectionSkeletonClass;
typedef struct _NMDBusVpnConnectionSkeletonPrivate NMDBusVpnConnectionSkeletonPrivate;

struct _NMDBusVpnConnectionSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusVpnConnectionSkeletonPrivate *priv;
};

struct _NMDBusVpnConnectionSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_vpn_connection_skeleton_get_type (void) G_GNUC_CONST;

NMDBusVpnConnection *nmdbus_vpn_connection_skeleton_new (void);


G_END_DECLS

#endif /* __NMDBUS_VPN_CONNECTION_H__ */
