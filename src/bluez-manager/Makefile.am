INCLUDES = \
	-I${top_srcdir} \
	-I${top_builddir}/include \
	-I${top_srcdir}/include \
	-I${top_builddir}/libnm-util \
	-I${top_srcdir}/libnm-util \
	-I${top_srcdir}/src \
	-I${top_builddir}/src/generated \
	-I${top_srcdir}/src/generated \
	-I${top_srcdir}/src/logging

noinst_LTLIBRARIES = libbluez-manager.la

libbluez_manager_la_SOURCES = \
	nm-bluez-common.h \
	nm-bluez-device.c \
	nm-bluez-device.h \
	nm-bluez-manager.h

if WITH_BLUEZ4
libbluez_manager_la_SOURCES += \
	nm-bluez4-adapter.h \
	nm-bluez4-adapter.c \
	nm-bluez4-manager.c
else
libbluez_manager_la_SOURCES += \
	nm-bluez-manager.c
endif

libbluez_manager_la_CPPFLAGS = \
	$(DBUS_CFLAGS) \
	$(GLIB_CFLAGS) \
	$(BLUEZ_CFLAGS) \
	-DBINDIR=\"$(bindir)\" \
	-DDATADIR=\"$(datadir)\" \
	-DSYSCONFDIR=\"$(sysconfdir)\" \
	-DLIBEXECDIR=\"$(libexecdir)\" \
	-DLOCALSTATEDIR=\"$(localstatedir)\"

libbluez_manager_la_LIBADD = \
	$(top_builddir)/src/generated/libnm-generated.la \
	$(top_builddir)/src/logging/libnm-logging.la \
	$(DBUS_LIBS) \
	$(GLIB_LIBS) \
	$(BLUEZ_LIBS)

