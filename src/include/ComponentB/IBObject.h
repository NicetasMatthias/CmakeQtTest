#ifndef IBOBJECT_H
#define IBOBJECT_H

#include <QtCore/QObject>

class IBObject : public QObject
{
    Q_OBJECT

public:
    IBObject (QObject *parent = nullptr)
        : QObject (parent)
    {}
    virtual ~IBObject () {}
    virtual QString foo () const = 0;
};

#endif //IAOBJECT_H
