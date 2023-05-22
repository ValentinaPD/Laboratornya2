#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class JavaPrintOperatorUnit final:public PrintOperatorUnit
{
public:
    JavaPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit( text ) { }
    std::string Compile( unsigned int level = 0 ) const;
};

#endif // JAVAPRINTOPERATORUNIT_H
