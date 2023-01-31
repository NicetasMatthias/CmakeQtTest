QT += core
QT -= gui

TARGET = $$qtLibraryTarget(ComponentA)
TEMPLATE = lib
CONFIG += plugin
LIBS += -lPhoenixExtensionSystem

INCLUDEPATH += ./
INCLUDEPATH += ../
INCLUDEPATH += ../../

DEFINES += COMPONENTA_LIBRARY

SOURCES += ComponentA.cpp \
           Object/A.cpp \

HEADERS += ComponentA.h \
           ComponentA_global.h \
           ComponentAInfo.h \
           Object/A.h \