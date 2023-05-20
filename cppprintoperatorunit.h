#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CppPrintOperatorUnit:public PrintOperatorUnit
{
public:
    CppPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
};

#endif // CPPPRINTOPERATORUNIT_H
