#ifndef CSPRINTOPERATORUNIT_H
#define CSPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CsPrintOperatorUnit: public PrintOperatorUnit
{
public:
    CsPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
    std::string Compile( unsigned int level = 0 ) const override;
};

#endif // CSPRINTOPERATORUNIT_H
