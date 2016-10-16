/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NMDBUS_DHCP6_CONFIG_H__
#define __NMDBUS_DHCP6_CONFIG_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.DHCP6Config */

#define NMDBUS_TYPE_DHCP6_CONFIG (nmdbus_dhcp6_config_get_type ())
#define NMDBUS_DHCP6_CONFIG(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DHCP6_CONFIG, NMDBusDHCP6Config))
#define NMDBUS_IS_DHCP6_CONFIG(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DHCP6_CONFIG))
#define NMDBUS_DHCP6_CONFIG_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DHCP6_CONFIG, NMDBusDHCP6ConfigIface))

struct _NMDBusDHCP6Config;
typedef struct _NMDBusDHCP6Config NMDBusDHCP6Config;
typedef struct _NMDBusDHCP6ConfigIface NMDBusDHCP6ConfigIface;

struct _NMDBusDHCP6ConfigIface
{
  GTypeInterface parent_iface;


  GVariant * (*get_options) (NMDBusDHCP6Config *object);

  void (*properties_changed) (
    NMDBusDHCP6Config *object,
    GVariant *arg_properties);

};

GType nmdbus_dhcp6_config_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_dhcp6_config_interface_info (void);
guint nmdbus_dhcp6_config_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void nmdbus_dhcp6_config_emit_properties_changed (
    NMDBusDHCP6Config *object,
    GVariant *arg_properties);



/* D-Bus property accessors: */
GVariant *nmdbus_dhcp6_config_get_options (NMDBusDHCP6Config *object);
GVariant *nmdbus_dhcp6_config_dup_options (NMDBusDHCP6Config *object);
void nmdbus_dhcp6_config_set_options (NMDBusDHCP6Config *object, GVariant *value);


/* ---- */

#define NMDBUS_TYPE_DHCP6_CONFIG_PROXY (nmdbus_dhcp6_config_proxy_get_type ())
#define NMDBUS_DHCP6_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DHCP6_CONFIG_PROXY, NMDBusDHCP6ConfigProxy))
#define NMDBUS_DHCP6_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DHCP6_CONFIG_PROXY, NMDBusDHCP6ConfigProxyClass))
#define NMDBUS_DHCP6_CONFIG_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DHCP6_CONFIG_PROXY, NMDBusDHCP6ConfigProxyClass))
#define NMDBUS_IS_DHCP6_CONFIG_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DHCP6_CONFIG_PROXY))
#define NMDBUS_IS_DHCP6_CONFIG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DHCP6_CONFIG_PROXY))

typedef struct _NMDBusDHCP6ConfigProxy NMDBusDHCP6ConfigProxy;
typedef struct _NMDBusDHCP6ConfigProxyClass NMDBusDHCP6ConfigProxyClass;
typedef struct _NMDBusDHCP6ConfigProxyPrivate NMDBusDHCP6ConfigProxyPrivate;

struct _NMDBusDHCP6ConfigProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDHCP6ConfigProxyPrivate *priv;
};

struct _NMDBusDHCP6ConfigProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_dhcp6_config_proxy_get_type (void) G_GNUC_CONST;

void nmdbus_dhcp6_config_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDHCP6Config *nmdbus_dhcp6_config_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDHCP6Config *nmdbus_dhcp6_config_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_dhcp6_config_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDHCP6Config *nmdbus_dhcp6_config_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDHCP6Config *nmdbus_dhcp6_config_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DHCP6_CONFIG_SKELETON (nmdbus_dhcp6_config_skeleton_get_type ())
#define NMDBUS_DHCP6_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DHCP6_CONFIG_SKELETON, NMDBusDHCP6ConfigSkeleton))
#define NMDBUS_DHCP6_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DHCP6_CONFIG_SKELETON, NMDBusDHCP6ConfigSkeletonClass))
#define NMDBUS_DHCP6_CONFIG_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DHCP6_CONFIG_SKELETON, NMDBusDHCP6ConfigSkeletonClass))
#define NMDBUS_IS_DHCP6_CONFIG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DHCP6_CONFIG_SKELETON))
#define NMDBUS_IS_DHCP6_CONFIG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DHCP6_CONFIG_SKELETON))

typedef struct _NMDBusDHCP6ConfigSkeleton NMDBusDHCP6ConfigSkeleton;
typedef struct _NMDBusDHCP6ConfigSkeletonClass NMDBusDHCP6ConfigSkeletonClass;
typedef struct _NMDBusDHCP6ConfigSkeletonPrivate NMDBusDHCP6ConfigSkeletonPrivate;

struct _NMDBusDHCP6ConfigSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDHCP6ConfigSkeletonPrivate *priv;
};

struct _NMDBusDHCP6ConfigSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_dhcp6_config_skeleton_get_type (void) G_GNUC_CONST;

NMDBusDHCP6Config *nmdbus_dhcp6_config_skeleton_new (void);


G_END_DECLS

#endif /* __NMDBUS_DHCP6_CONFIG_H__ */
