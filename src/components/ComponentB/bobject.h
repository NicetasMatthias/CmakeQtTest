#ifndef BOBJECT_H
#define BOBJECT_H

#include <ComponentB/IBObject.h>
#include <QObject>
#include <ComponentB/IWord.h>

class BObject : public IBObject
{
    Q_OBJECT
public:
    explicit BObject(QObject *parent = nullptr);

    void add (IWord::ptr_t ptr);
    QString foo () const override;

private:
    std::vector<IWord::ptr_t> words_;
};

#endif // BOBJECT_H
