QT += core
QT -= gui

TARGET = $$qtLibraryTarget(ComponentB)
TEMPLATE = lib
CONFIG += plugin
LIBS += -lPhoenixExtensionSystem

INCLUDEPATH += ./
INCLUDEPATH += ../
INCLUDEPATH += ../../

DEFINES += COMPONENTB_LIBRARY

SOURCES += ComponentB.cpp \
           Object/B.cpp \

HEADERS += ComponentB.h \
           ComponentB_global.h \
           ComponentBInfo.h \
           Object/B.h \