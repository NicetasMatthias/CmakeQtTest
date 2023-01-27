#include "ComponentB.h"
#include "ComponentBInfo.h"
#include <QtCore/QDebug>
#include <PhoenixExt/ComponentManager>



ComponentB::ComponentB()
{
    _guid = COMPONENT_B_GUID;
    _version = COMPONENT_B_VERSION;
    _name = trUtf8 (COMPONENT_B_NAME);

    _b = 0x00;
}

ComponentB::~ComponentB()
{
    if(_b != 0x00) {
        delete _b;
        _b = 0x00;
    }
}

bool ComponentB::init()
{
    if(isInit() == true)
        return true;


    // -- Init Component Object
    _b = new B(0x00);

    _init = true;
    return true;
}

Q_EXPORT_PLUGIN2(ComponentB_, ComponentB);