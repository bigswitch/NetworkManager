/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NMDBUS_DEVICE_VXLAN_H__
#define __NMDBUS_DEVICE_VXLAN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Vxlan */

#define NMDBUS_TYPE_DEVICE_VXLAN (nmdbus_device_vxlan_get_type ())
#define NMDBUS_DEVICE_VXLAN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_VXLAN, NMDBusDeviceVxlan))
#define NMDBUS_IS_DEVICE_VXLAN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_VXLAN))
#define NMDBUS_DEVICE_VXLAN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_VXLAN, NMDBusDeviceVxlanIface))

struct _NMDBusDeviceVxlan;
typedef struct _NMDBusDeviceVxlan NMDBusDeviceVxlan;
typedef struct _NMDBusDeviceVxlanIface NMDBusDeviceVxlanIface;

struct _NMDBusDeviceVxlanIface
{
  GTypeInterface parent_iface;


  guint  (*get_ageing) (NMDBusDeviceVxlan *object);

  guint16  (*get_dst_port) (NMDBusDeviceVxlan *object);

  const gchar * (*get_group) (NMDBusDeviceVxlan *object);

  guint  (*get_id) (NMDBusDeviceVxlan *object);

  gboolean  (*get_l2miss) (NMDBusDeviceVxlan *object);

  gboolean  (*get_l3miss) (NMDBusDeviceVxlan *object);

  gboolean  (*get_learning) (NMDBusDeviceVxlan *object);

  guint  (*get_limit) (NMDBusDeviceVxlan *object);

  const gchar * (*get_local) (NMDBusDeviceVxlan *object);

  const gchar * (*get_parent) (NMDBusDeviceVxlan *object);

  gboolean  (*get_proxy) (NMDBusDeviceVxlan *object);

  gboolean  (*get_rsc) (NMDBusDeviceVxlan *object);

  guint16  (*get_src_port_max) (NMDBusDeviceVxlan *object);

  guint16  (*get_src_port_min) (NMDBusDeviceVxlan *object);

  guchar  (*get_tos) (NMDBusDeviceVxlan *object);

  guchar  (*get_ttl) (NMDBusDeviceVxlan *object);

  void (*properties_changed) (
    NMDBusDeviceVxlan *object,
    GVariant *arg_properties);

};

GType nmdbus_device_vxlan_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_vxlan_interface_info (void);
guint nmdbus_device_vxlan_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void nmdbus_device_vxlan_emit_properties_changed (
    NMDBusDeviceVxlan *object,
    GVariant *arg_properties);



/* D-Bus property accessors: */
const gchar *nmdbus_device_vxlan_get_parent (NMDBusDeviceVxlan *object);
gchar *nmdbus_device_vxlan_dup_parent (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_parent (NMDBusDeviceVxlan *object, const gchar *value);

guint nmdbus_device_vxlan_get_id (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_id (NMDBusDeviceVxlan *object, guint value);

const gchar *nmdbus_device_vxlan_get_group (NMDBusDeviceVxlan *object);
gchar *nmdbus_device_vxlan_dup_group (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_group (NMDBusDeviceVxlan *object, const gchar *value);

const gchar *nmdbus_device_vxlan_get_local (NMDBusDeviceVxlan *object);
gchar *nmdbus_device_vxlan_dup_local (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_local (NMDBusDeviceVxlan *object, const gchar *value);

guchar nmdbus_device_vxlan_get_tos (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_tos (NMDBusDeviceVxlan *object, guchar value);

guchar nmdbus_device_vxlan_get_ttl (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_ttl (NMDBusDeviceVxlan *object, guchar value);

gboolean nmdbus_device_vxlan_get_learning (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_learning (NMDBusDeviceVxlan *object, gboolean value);

guint nmdbus_device_vxlan_get_ageing (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_ageing (NMDBusDeviceVxlan *object, guint value);

guint nmdbus_device_vxlan_get_limit (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_limit (NMDBusDeviceVxlan *object, guint value);

guint16 nmdbus_device_vxlan_get_dst_port (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_dst_port (NMDBusDeviceVxlan *object, guint16 value);

guint16 nmdbus_device_vxlan_get_src_port_min (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_src_port_min (NMDBusDeviceVxlan *object, guint16 value);

guint16 nmdbus_device_vxlan_get_src_port_max (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_src_port_max (NMDBusDeviceVxlan *object, guint16 value);

gboolean nmdbus_device_vxlan_get_proxy (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_proxy (NMDBusDeviceVxlan *object, gboolean value);

gboolean nmdbus_device_vxlan_get_rsc (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_rsc (NMDBusDeviceVxlan *object, gboolean value);

gboolean nmdbus_device_vxlan_get_l2miss (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_l2miss (NMDBusDeviceVxlan *object, gboolean value);

gboolean nmdbus_device_vxlan_get_l3miss (NMDBusDeviceVxlan *object);
void nmdbus_device_vxlan_set_l3miss (NMDBusDeviceVxlan *object, gboolean value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_VXLAN_PROXY (nmdbus_device_vxlan_proxy_get_type ())
#define NMDBUS_DEVICE_VXLAN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_VXLAN_PROXY, NMDBusDeviceVxlanProxy))
#define NMDBUS_DEVICE_VXLAN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_VXLAN_PROXY, NMDBusDeviceVxlanProxyClass))
#define NMDBUS_DEVICE_VXLAN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_VXLAN_PROXY, NMDBusDeviceVxlanProxyClass))
#define NMDBUS_IS_DEVICE_VXLAN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_VXLAN_PROXY))
#define NMDBUS_IS_DEVICE_VXLAN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_VXLAN_PROXY))

typedef struct _NMDBusDeviceVxlanProxy NMDBusDeviceVxlanProxy;
typedef struct _NMDBusDeviceVxlanProxyClass NMDBusDeviceVxlanProxyClass;
typedef struct _NMDBusDeviceVxlanProxyPrivate NMDBusDeviceVxlanProxyPrivate;

struct _NMDBusDeviceVxlanProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceVxlanProxyPrivate *priv;
};

struct _NMDBusDeviceVxlanProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_vxlan_proxy_get_type (void) G_GNUC_CONST;

void nmdbus_device_vxlan_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceVxlan *nmdbus_device_vxlan_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceVxlan *nmdbus_device_vxlan_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_vxlan_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceVxlan *nmdbus_device_vxlan_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceVxlan *nmdbus_device_vxlan_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_VXLAN_SKELETON (nmdbus_device_vxlan_skeleton_get_type ())
#define NMDBUS_DEVICE_VXLAN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_VXLAN_SKELETON, NMDBusDeviceVxlanSkeleton))
#define NMDBUS_DEVICE_VXLAN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_VXLAN_SKELETON, NMDBusDeviceVxlanSkeletonClass))
#define NMDBUS_DEVICE_VXLAN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_VXLAN_SKELETON, NMDBusDeviceVxlanSkeletonClass))
#define NMDBUS_IS_DEVICE_VXLAN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_VXLAN_SKELETON))
#define NMDBUS_IS_DEVICE_VXLAN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_VXLAN_SKELETON))

typedef struct _NMDBusDeviceVxlanSkeleton NMDBusDeviceVxlanSkeleton;
typedef struct _NMDBusDeviceVxlanSkeletonClass NMDBusDeviceVxlanSkeletonClass;
typedef struct _NMDBusDeviceVxlanSkeletonPrivate NMDBusDeviceVxlanSkeletonPrivate;

struct _NMDBusDeviceVxlanSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceVxlanSkeletonPrivate *priv;
};

struct _NMDBusDeviceVxlanSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_vxlan_skeleton_get_type (void) G_GNUC_CONST;

NMDBusDeviceVxlan *nmdbus_device_vxlan_skeleton_new (void);


G_END_DECLS

#endif /* __NMDBUS_DEVICE_VXLAN_H__ */
