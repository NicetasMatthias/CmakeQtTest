#ifndef COMPONENTB_H
#define COMPONENTB_H

#include "ComponentB_global.h"
#include <ComponentsCore5alpha/IComponent>
#include "bobject.h"


class COMPONENTB_EXPORT ComponentB : public ComponentsCore::IComponent
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.inteltech.Qt.ComponentB" FILE "ComponentB.json")
public:
    ComponentB();
    ~ComponentB();

    //! \brief Инициализация компонента.
    //! \return true / false
    bool init () override;

private:
    BObject *object_ {nullptr};
};

#endif // COMPONENTB_H
