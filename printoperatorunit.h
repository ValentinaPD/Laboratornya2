#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include <QString>
#include "unit.h"

class PrintOperatorUnit:public Unit
{
public:
    PrintOperatorUnit();
    explicit PrintOperatorUnit( const std::string& text ) : m_text( text ) { }
    std::string compile( unsigned int level = 0 ) const;
private:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_H
