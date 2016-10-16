/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NMDBUS_MANAGER_H__
#define __NMDBUS_MANAGER_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager */

#define NMDBUS_TYPE_MANAGER (nmdbus_manager_get_type ())
#define NMDBUS_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_MANAGER, NMDBusManager))
#define NMDBUS_IS_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_MANAGER))
#define NMDBUS_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_MANAGER, NMDBusManagerIface))

struct _NMDBusManager;
typedef struct _NMDBusManager NMDBusManager;
typedef struct _NMDBusManagerIface NMDBusManagerIface;

struct _NMDBusManagerIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_activate_connection) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object);

  gboolean (*handle_add_and_activate_connection) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object);

  gboolean (*handle_check_connectivity) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_deactivate_connection) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_active_connection);

  gboolean (*handle_enable) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_enable);

  gboolean (*handle_get_device_by_ip_iface) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_iface);

  gboolean (*handle_get_devices) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_logging) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_permissions) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_logging) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_level,
    const gchar *arg_domains);

  gboolean (*handle_sleep) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_sleep);

  gboolean (*handle_state) (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

  const gchar * (*get_activating_connection) (NMDBusManager *object);

  const gchar *const * (*get_active_connections) (NMDBusManager *object);

  guint  (*get_connectivity) (NMDBusManager *object);

  const gchar *const * (*get_devices) (NMDBusManager *object);

  guint  (*get_metered) (NMDBusManager *object);

  gboolean  (*get_networking_enabled) (NMDBusManager *object);

  const gchar * (*get_primary_connection) (NMDBusManager *object);

  const gchar * (*get_primary_connection_type) (NMDBusManager *object);

  gboolean  (*get_startup) (NMDBusManager *object);

  guint  (*get_state) (NMDBusManager *object);

  const gchar * (*get_version) (NMDBusManager *object);

  gboolean  (*get_wimax_enabled) (NMDBusManager *object);

  gboolean  (*get_wimax_hardware_enabled) (NMDBusManager *object);

  gboolean  (*get_wireless_enabled) (NMDBusManager *object);

  gboolean  (*get_wireless_hardware_enabled) (NMDBusManager *object);

  gboolean  (*get_wwan_enabled) (NMDBusManager *object);

  gboolean  (*get_wwan_hardware_enabled) (NMDBusManager *object);

  void (*check_permissions) (
    NMDBusManager *object);

  void (*device_added) (
    NMDBusManager *object,
    const gchar *arg_device_path);

  void (*device_removed) (
    NMDBusManager *object,
    const gchar *arg_device_path);

  void (*properties_changed) (
    NMDBusManager *object,
    GVariant *arg_properties);

  void (*state_changed) (
    NMDBusManager *object,
    guint arg_state);

};

GType nmdbus_manager_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_manager_interface_info (void);
guint nmdbus_manager_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void nmdbus_manager_complete_get_devices (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *devices);

void nmdbus_manager_complete_get_device_by_ip_iface (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *device);

void nmdbus_manager_complete_activate_connection (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *active_connection);

void nmdbus_manager_complete_add_and_activate_connection (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *path,
    const gchar *active_connection);

void nmdbus_manager_complete_deactivate_connection (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

void nmdbus_manager_complete_sleep (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

void nmdbus_manager_complete_enable (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

void nmdbus_manager_complete_get_permissions (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    GVariant *permissions);

void nmdbus_manager_complete_set_logging (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation);

void nmdbus_manager_complete_get_logging (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *level,
    const gchar *domains);

void nmdbus_manager_complete_check_connectivity (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    guint connectivity);

void nmdbus_manager_complete_state (
    NMDBusManager *object,
    GDBusMethodInvocation *invocation,
    guint state);



/* D-Bus signal emissions functions: */
void nmdbus_manager_emit_check_permissions (
    NMDBusManager *object);

void nmdbus_manager_emit_state_changed (
    NMDBusManager *object,
    guint arg_state);

void nmdbus_manager_emit_properties_changed (
    NMDBusManager *object,
    GVariant *arg_properties);

void nmdbus_manager_emit_device_added (
    NMDBusManager *object,
    const gchar *arg_device_path);

void nmdbus_manager_emit_device_removed (
    NMDBusManager *object,
    const gchar *arg_device_path);



/* D-Bus method calls: */
void nmdbus_manager_call_get_devices (
    NMDBusManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_get_devices_finish (
    NMDBusManager *proxy,
    gchar ***out_devices,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_get_devices_sync (
    NMDBusManager *proxy,
    gchar ***out_devices,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_get_device_by_ip_iface (
    NMDBusManager *proxy,
    const gchar *arg_iface,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_get_device_by_ip_iface_finish (
    NMDBusManager *proxy,
    gchar **out_device,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_get_device_by_ip_iface_sync (
    NMDBusManager *proxy,
    const gchar *arg_iface,
    gchar **out_device,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_activate_connection (
    NMDBusManager *proxy,
    const gchar *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_activate_connection_finish (
    NMDBusManager *proxy,
    gchar **out_active_connection,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_activate_connection_sync (
    NMDBusManager *proxy,
    const gchar *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object,
    gchar **out_active_connection,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_add_and_activate_connection (
    NMDBusManager *proxy,
    GVariant *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_add_and_activate_connection_finish (
    NMDBusManager *proxy,
    gchar **out_path,
    gchar **out_active_connection,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_add_and_activate_connection_sync (
    NMDBusManager *proxy,
    GVariant *arg_connection,
    const gchar *arg_device,
    const gchar *arg_specific_object,
    gchar **out_path,
    gchar **out_active_connection,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_deactivate_connection (
    NMDBusManager *proxy,
    const gchar *arg_active_connection,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_deactivate_connection_finish (
    NMDBusManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_deactivate_connection_sync (
    NMDBusManager *proxy,
    const gchar *arg_active_connection,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_sleep (
    NMDBusManager *proxy,
    gboolean arg_sleep,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_sleep_finish (
    NMDBusManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_sleep_sync (
    NMDBusManager *proxy,
    gboolean arg_sleep,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_enable (
    NMDBusManager *proxy,
    gboolean arg_enable,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_enable_finish (
    NMDBusManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_enable_sync (
    NMDBusManager *proxy,
    gboolean arg_enable,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_get_permissions (
    NMDBusManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_get_permissions_finish (
    NMDBusManager *proxy,
    GVariant **out_permissions,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_get_permissions_sync (
    NMDBusManager *proxy,
    GVariant **out_permissions,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_set_logging (
    NMDBusManager *proxy,
    const gchar *arg_level,
    const gchar *arg_domains,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_set_logging_finish (
    NMDBusManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_set_logging_sync (
    NMDBusManager *proxy,
    const gchar *arg_level,
    const gchar *arg_domains,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_get_logging (
    NMDBusManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_get_logging_finish (
    NMDBusManager *proxy,
    gchar **out_level,
    gchar **out_domains,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_get_logging_sync (
    NMDBusManager *proxy,
    gchar **out_level,
    gchar **out_domains,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_check_connectivity (
    NMDBusManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_check_connectivity_finish (
    NMDBusManager *proxy,
    guint *out_connectivity,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_check_connectivity_sync (
    NMDBusManager *proxy,
    guint *out_connectivity,
    GCancellable *cancellable,
    GError **error);

void nmdbus_manager_call_state (
    NMDBusManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean nmdbus_manager_call_state_finish (
    NMDBusManager *proxy,
    guint *out_state,
    GAsyncResult *res,
    GError **error);

gboolean nmdbus_manager_call_state_sync (
    NMDBusManager *proxy,
    guint *out_state,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *const *nmdbus_manager_get_devices (NMDBusManager *object);
gchar **nmdbus_manager_dup_devices (NMDBusManager *object);
void nmdbus_manager_set_devices (NMDBusManager *object, const gchar *const *value);

gboolean nmdbus_manager_get_networking_enabled (NMDBusManager *object);
void nmdbus_manager_set_networking_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wireless_enabled (NMDBusManager *object);
void nmdbus_manager_set_wireless_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wireless_hardware_enabled (NMDBusManager *object);
void nmdbus_manager_set_wireless_hardware_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wwan_enabled (NMDBusManager *object);
void nmdbus_manager_set_wwan_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wwan_hardware_enabled (NMDBusManager *object);
void nmdbus_manager_set_wwan_hardware_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wimax_enabled (NMDBusManager *object);
void nmdbus_manager_set_wimax_enabled (NMDBusManager *object, gboolean value);

gboolean nmdbus_manager_get_wimax_hardware_enabled (NMDBusManager *object);
void nmdbus_manager_set_wimax_hardware_enabled (NMDBusManager *object, gboolean value);

const gchar *const *nmdbus_manager_get_active_connections (NMDBusManager *object);
gchar **nmdbus_manager_dup_active_connections (NMDBusManager *object);
void nmdbus_manager_set_active_connections (NMDBusManager *object, const gchar *const *value);

const gchar *nmdbus_manager_get_primary_connection (NMDBusManager *object);
gchar *nmdbus_manager_dup_primary_connection (NMDBusManager *object);
void nmdbus_manager_set_primary_connection (NMDBusManager *object, const gchar *value);

const gchar *nmdbus_manager_get_primary_connection_type (NMDBusManager *object);
gchar *nmdbus_manager_dup_primary_connection_type (NMDBusManager *object);
void nmdbus_manager_set_primary_connection_type (NMDBusManager *object, const gchar *value);

guint nmdbus_manager_get_metered (NMDBusManager *object);
void nmdbus_manager_set_metered (NMDBusManager *object, guint value);

const gchar *nmdbus_manager_get_activating_connection (NMDBusManager *object);
gchar *nmdbus_manager_dup_activating_connection (NMDBusManager *object);
void nmdbus_manager_set_activating_connection (NMDBusManager *object, const gchar *value);

gboolean nmdbus_manager_get_startup (NMDBusManager *object);
void nmdbus_manager_set_startup (NMDBusManager *object, gboolean value);

const gchar *nmdbus_manager_get_version (NMDBusManager *object);
gchar *nmdbus_manager_dup_version (NMDBusManager *object);
void nmdbus_manager_set_version (NMDBusManager *object, const gchar *value);

guint nmdbus_manager_get_state (NMDBusManager *object);
void nmdbus_manager_set_state (NMDBusManager *object, guint value);

guint nmdbus_manager_get_connectivity (NMDBusManager *object);
void nmdbus_manager_set_connectivity (NMDBusManager *object, guint value);


/* ---- */

#define NMDBUS_TYPE_MANAGER_PROXY (nmdbus_manager_proxy_get_type ())
#define NMDBUS_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_MANAGER_PROXY, NMDBusManagerProxy))
#define NMDBUS_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_MANAGER_PROXY, NMDBusManagerProxyClass))
#define NMDBUS_MANAGER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_MANAGER_PROXY, NMDBusManagerProxyClass))
#define NMDBUS_IS_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_MANAGER_PROXY))
#define NMDBUS_IS_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_MANAGER_PROXY))

typedef struct _NMDBusManagerProxy NMDBusManagerProxy;
typedef struct _NMDBusManagerProxyClass NMDBusManagerProxyClass;
typedef struct _NMDBusManagerProxyPrivate NMDBusManagerProxyPrivate;

struct _NMDBusManagerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusManagerProxyPrivate *priv;
};

struct _NMDBusManagerProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_manager_proxy_get_type (void) G_GNUC_CONST;

void nmdbus_manager_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusManager *nmdbus_manager_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusManager *nmdbus_manager_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_manager_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusManager *nmdbus_manager_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusManager *nmdbus_manager_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_MANAGER_SKELETON (nmdbus_manager_skeleton_get_type ())
#define NMDBUS_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_MANAGER_SKELETON, NMDBusManagerSkeleton))
#define NMDBUS_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_MANAGER_SKELETON, NMDBusManagerSkeletonClass))
#define NMDBUS_MANAGER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_MANAGER_SKELETON, NMDBusManagerSkeletonClass))
#define NMDBUS_IS_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_MANAGER_SKELETON))
#define NMDBUS_IS_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_MANAGER_SKELETON))

typedef struct _NMDBusManagerSkeleton NMDBusManagerSkeleton;
typedef struct _NMDBusManagerSkeletonClass NMDBusManagerSkeletonClass;
typedef struct _NMDBusManagerSkeletonPrivate NMDBusManagerSkeletonPrivate;

struct _NMDBusManagerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusManagerSkeletonPrivate *priv;
};

struct _NMDBusManagerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_manager_skeleton_get_type (void) G_GNUC_CONST;

NMDBusManager *nmdbus_manager_skeleton_new (void);


G_END_DECLS

#endif /* __NMDBUS_MANAGER_H__ */
