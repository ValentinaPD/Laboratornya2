#ifndef CSPRINTOPERATORUNIT_H
#define CSPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CsPrintOperatorUnit final: public PrintOperatorUnit
{
public:
    CsPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
    std::string Compile( unsigned int level = 0 ) const;
};

#endif // CSPRINTOPERATORUNIT_H
