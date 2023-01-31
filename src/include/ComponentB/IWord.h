#ifndef IWORD_H
#define IWORD_H

#include <QtCore/QObject>
#include <memory>

class IWord : public QObject
{
    Q_OBJECT

public:
    using ptr_t = std::shared_ptr<IWord>;

    IWord (QObject *parent = nullptr)
        : QObject (parent)
    {}
    virtual ~IWord () {}
    virtual QString text () const = 0;
};

#endif //IWORD_H
