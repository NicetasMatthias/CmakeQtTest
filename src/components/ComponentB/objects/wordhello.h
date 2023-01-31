#ifndef WORDHELLO_H
#define WORDHELLO_H

#include <ComponentB/IWord.h>
#include <QObject>

class WordHello : public IWord
{
public:
    WordHello();
    ~WordHello();

    QString text () const override;
protected:
    QString text_;
};

#endif // WORDHELLO_H
