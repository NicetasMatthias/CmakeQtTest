#include "ComponentA.h"
#include "ComponentAInfo.h"
#include <QtCore/QDebug>
#include <PhoenixExt/ComponentManager>



ComponentA::ComponentA()
{
    _guid = COMPONENT_A_GUID;
    _version = COMPONENT_A_VERSION;
    _name = trUtf8 (COMPONENT_A_NAME);

    _a = 0x00;
}

ComponentA::~ComponentA()
{
    if(_a != 0x00) {
        delete _a;
        _a = 0x00;
    }
}

bool ComponentA::init()
{
    if(isInit() == true)
        return true;


    // -- Init Component Object
    _a = new A(0x00);

    _init = true;
    return true;
}

Q_EXPORT_PLUGIN2(ComponentA_, ComponentA);