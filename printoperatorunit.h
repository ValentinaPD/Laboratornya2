#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include <QString>
#include "unit.h"

class PrintOperatorUnit:public Unit
{
public:
    PrintOperatorUnit();
    explicit PrintOperatorUnit( const QString& text ) : m_text( text ) { }
    QString compile( unsigned int level = 0 ) const;
private:
    QString m_text;
};

#endif // PRINTOPERATORUNIT_H
