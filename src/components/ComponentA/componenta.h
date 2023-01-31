#ifndef COMPONENTA_H
#define COMPONENTA_H

#include "ComponentA_global.h"
#include <ComponentsCore5alpha/IComponent>
#include "aobject.h"

class COMPONENTA_EXPORT ComponentA : public ComponentsCore::IComponent
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.inteltech.Qt.ComponentA" FILE "ComponentA.json")

public:
    ComponentA ();
    ~ComponentA ();

    //! \brief Инициализация компонента.
    //! \return true / false
    bool init () override;

private:
    AObject *object_ {nullptr};
};

#endif // COMPONENTA_H
