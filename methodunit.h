#ifndef METHODUNIT_H
#define METHODUNIT_H
#include <QString>
#include <QVector>
#include <QSharedPointer>
#include "unit.h"


class MethodUnit:public Unit
{
private:
    QString m_name;
    QString m_returnType;
    Flags m_flags;
    QVector<QSharedPointer<Unit>> m_body;
public:
     enum Modifier {
     STATIC = 1,
     CONST = 1 << 1,
     VIRTUAL = 1 << 2
     };

public:
    MethodUnit();
    MethodUnit( const QString& name, const QString& returnType, Flags flags ) : m_name( name ), m_returnType( returnType ), m_flags( flags ){}
    void add( const QSharedPointer<Unit>& unit, Flags /* flags */ = 0 );
    QString compile( unsigned int level = 0 ) const;
};

#endif // METHODUNIT_H
