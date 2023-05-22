#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H
#include "classunit.h"

class JavaClassUnit final:public ClassUnit
{
public:
    JavaClassUnit( const std::string& name ) : ClassUnit(name){}
    std::string Compile( unsigned int level = 0 ) const;
};

#endif // JAVACLASSUNIT_H
