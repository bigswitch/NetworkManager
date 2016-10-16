/*
 * Generated by gdbus-codegen 2.40.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __NMDBUS_DEVICE_BOND_H__
#define __NMDBUS_DEVICE_BOND_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Bond */

#define NMDBUS_TYPE_DEVICE_BOND (nmdbus_device_bond_get_type ())
#define NMDBUS_DEVICE_BOND(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BOND, NMDBusDeviceBond))
#define NMDBUS_IS_DEVICE_BOND(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BOND))
#define NMDBUS_DEVICE_BOND_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_BOND, NMDBusDeviceBondIface))

struct _NMDBusDeviceBond;
typedef struct _NMDBusDeviceBond NMDBusDeviceBond;
typedef struct _NMDBusDeviceBondIface NMDBusDeviceBondIface;

struct _NMDBusDeviceBondIface
{
  GTypeInterface parent_iface;


  gboolean  (*get_carrier) (NMDBusDeviceBond *object);

  const gchar * (*get_hw_address) (NMDBusDeviceBond *object);

  const gchar *const * (*get_slaves) (NMDBusDeviceBond *object);

  void (*properties_changed) (
    NMDBusDeviceBond *object,
    GVariant *arg_properties);

};

GType nmdbus_device_bond_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_bond_interface_info (void);
guint nmdbus_device_bond_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void nmdbus_device_bond_emit_properties_changed (
    NMDBusDeviceBond *object,
    GVariant *arg_properties);



/* D-Bus property accessors: */
const gchar *nmdbus_device_bond_get_hw_address (NMDBusDeviceBond *object);
gchar *nmdbus_device_bond_dup_hw_address (NMDBusDeviceBond *object);
void nmdbus_device_bond_set_hw_address (NMDBusDeviceBond *object, const gchar *value);

gboolean nmdbus_device_bond_get_carrier (NMDBusDeviceBond *object);
void nmdbus_device_bond_set_carrier (NMDBusDeviceBond *object, gboolean value);

const gchar *const *nmdbus_device_bond_get_slaves (NMDBusDeviceBond *object);
gchar **nmdbus_device_bond_dup_slaves (NMDBusDeviceBond *object);
void nmdbus_device_bond_set_slaves (NMDBusDeviceBond *object, const gchar *const *value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_BOND_PROXY (nmdbus_device_bond_proxy_get_type ())
#define NMDBUS_DEVICE_BOND_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BOND_PROXY, NMDBusDeviceBondProxy))
#define NMDBUS_DEVICE_BOND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_BOND_PROXY, NMDBusDeviceBondProxyClass))
#define NMDBUS_DEVICE_BOND_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_BOND_PROXY, NMDBusDeviceBondProxyClass))
#define NMDBUS_IS_DEVICE_BOND_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BOND_PROXY))
#define NMDBUS_IS_DEVICE_BOND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_BOND_PROXY))

typedef struct _NMDBusDeviceBondProxy NMDBusDeviceBondProxy;
typedef struct _NMDBusDeviceBondProxyClass NMDBusDeviceBondProxyClass;
typedef struct _NMDBusDeviceBondProxyPrivate NMDBusDeviceBondProxyPrivate;

struct _NMDBusDeviceBondProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceBondProxyPrivate *priv;
};

struct _NMDBusDeviceBondProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_bond_proxy_get_type (void) G_GNUC_CONST;

void nmdbus_device_bond_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceBond *nmdbus_device_bond_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceBond *nmdbus_device_bond_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_bond_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceBond *nmdbus_device_bond_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceBond *nmdbus_device_bond_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_BOND_SKELETON (nmdbus_device_bond_skeleton_get_type ())
#define NMDBUS_DEVICE_BOND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BOND_SKELETON, NMDBusDeviceBondSkeleton))
#define NMDBUS_DEVICE_BOND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_BOND_SKELETON, NMDBusDeviceBondSkeletonClass))
#define NMDBUS_DEVICE_BOND_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_BOND_SKELETON, NMDBusDeviceBondSkeletonClass))
#define NMDBUS_IS_DEVICE_BOND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BOND_SKELETON))
#define NMDBUS_IS_DEVICE_BOND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_BOND_SKELETON))

typedef struct _NMDBusDeviceBondSkeleton NMDBusDeviceBondSkeleton;
typedef struct _NMDBusDeviceBondSkeletonClass NMDBusDeviceBondSkeletonClass;
typedef struct _NMDBusDeviceBondSkeletonPrivate NMDBusDeviceBondSkeletonPrivate;

struct _NMDBusDeviceBondSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceBondSkeletonPrivate *priv;
};

struct _NMDBusDeviceBondSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_bond_skeleton_get_type (void) G_GNUC_CONST;

NMDBusDeviceBond *nmdbus_device_bond_skeleton_new (void);


G_END_DECLS

#endif /* __NMDBUS_DEVICE_BOND_H__ */
