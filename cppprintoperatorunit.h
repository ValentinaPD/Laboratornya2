#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CppPrintOperatorUnit:public PrintOperatorUnit
{
public:
    CppPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
    std::string Compile( unsigned int level = 0 ) const override;
};

#endif // CPPPRINTOPERATORUNIT_H
