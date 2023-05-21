#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CppPrintOperatorUnit final:public PrintOperatorUnit
{
public:
    CppPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
    std::string Compile( unsigned int level = 0 ) const;
};

#endif // CPPPRINTOPERATORUNIT_H
