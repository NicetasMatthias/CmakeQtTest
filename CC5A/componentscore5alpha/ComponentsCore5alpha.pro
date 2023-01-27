TARGET = ComponentsCore5alpha
TEMPLATE = lib

CONFIG += c++14

INCLUDEPATH += ../
DESTDIR = ../ComponentsCore5alpha-build

DEFINES += COMPOENENTSCORE5A_LIBRARY
unix:!macx:!freebsd*:LIBS += -ldl #wtf

MOC_DIR += ../ComponentsCore5alpha-build/GeneratedFiles
OBJECTS_DIR += ../ComponentsCore5alpha-build/GeneratedFiles
UI_DIR += ../ComponentsCore5alpha-build/GeneratedFiles
RCC_DIR += ../ComponentsCore5alpha-build/GeneratedFiles

VERSION = 1.4.0

SOURCES += \
    componentmanager.cpp    \
    componentspec.cpp       \
    icomponent.cpp          \
    icomponent_p.cpp        \
    invoker.cpp

HEADERS +=\
    componentscore_global.h \
    componentmanager.h      \
    componentmanager_p.h    \
    componentspec.h         \
    componentspec_p.h       \
    icomponent.h            \
    ComponentManager        \
    IComponent              \
    icomponent_p.h          \
    invoker.h               \
    version.h               \
    Version

unix {
    ASTRA_BUILD = $$system("echo $ASTRA_BUILD")	

    contains(QMAKE_HOST.arch, x86_64) {
        target.path = /usr/local/lib64
    } else {
        target.path = /usr/local/lib
    }
    !isEmpty(ASTRA_BUILD) {
        target.path = /usr/lib
    }
    INSTALLS += target

    headers.files = componentscore_global.h \
        componentmanager.h \
        componentspec.h \
        icomponent.h \
        version.h \
        invoker.h \
        ComponentManager \
        IComponent \
        Version \
        Invoker

    headers.path = /usr/local/include/ComponentsCore5alpha
    !isEmpty(ASTRA_BUILD) {
	headers.path = /usr/include/ComponentsCore5alpha
    }
    INSTALLS += headers
}

DISTFILES += \
    Changelist.txt


