TEMPLATE = app
TARGET = printerui
macos:CONFIG -= app_bundle
QT += quick
CONFIG += c++11

SOURCES += \
        main.cpp

target.path = $$OUT_PWD/../bin
INSTALLS += target
