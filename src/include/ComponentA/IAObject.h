#ifndef IAOBJECT_H
#define IAOBJECT_H

#include <QtCore/QObject>

class IAObject : public QObject
{
    Q_OBJECT

public:
    IAObject (QObject *parent = nullptr)
        : QObject (parent)
    {}
    virtual ~IAObject () {}
    virtual void foo () = 0;
};

#endif //IAOBJECT_H
