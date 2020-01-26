TEMPLATE = lib
TARGET  = printersettingsplugin
QT += qml
CONFIG += qt plugin c++11

uri = com.org.printersettings

DESTDIR = $$OUT_PWD/../../plugins/com/org/printersettings

SOURCES += \
    plugin.cpp \
    printersettings.cpp \

HEADERS += \
    printersettings.h \

OTHER_FILES += qmldir

qmldir.files = qmldir
qmldir.path = $$DESTDIR
INSTALLS +=  qmldir
