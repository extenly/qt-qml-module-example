TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS += plugins
SUBDIRS += src

OTHER_FILES += $$files($$PWD/*.qml, true)

qml.files = main.qml
qml.path = $$OUT_PWD
INSTALLS += qml

asset.files =  onoff.png
asset.path = $$OUT_PWD
INSTALLS += asset
