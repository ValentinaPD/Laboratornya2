#ifndef UNIT_H
#define UNIT_H
#include <QString>
#include <QSharedPointer>
class Unit
{
private:

public:
    using Flags = unsigned int;
    Unit();
    virtual void add(const QSharedPointer<Unit>& , Flags flags);
    virtual QString compile( unsigned int level = 0 ) const = 0;
    virtual ~Unit() = default;
protected:
    virtual QString generateShift( unsigned int level ) const;


};


#endif // UNIT_H
