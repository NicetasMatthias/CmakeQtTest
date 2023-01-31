#ifndef COMPONENTA_H
#define COMPONENTA_H

#include "ComponentA_global.h"
#include <PhoenixExt/IComponent>

#include "Object/A.h"

class COMPONENTASHARED_EXPORT ComponentA : public ExtensionSystem::IComponent
{
    Q_OBJECT

public:
    ComponentA();
    ~ComponentA();
    virtual bool init();

protected:
    A* _a;
};

#endif // COMPONENTA_H