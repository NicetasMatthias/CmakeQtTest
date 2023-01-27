#ifndef COMPONENTB_H
#define COMPONENTB_H

#include "ComponentB_global.h"
#include <PhoenixExt/IComponent>

#include "Object/B.h"

class COMPONENTBSHARED_EXPORT ComponentB : public ExtensionSystem::IComponent
{
    Q_OBJECT

public:
    ComponentB();
    ~ComponentB();
    virtual bool init();

protected:
    B* _b;
};

#endif // COMPONENTB_H