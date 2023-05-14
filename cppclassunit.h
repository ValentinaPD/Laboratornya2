#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H
#include "classunit.h"

class CppClassUnit:public ClassUnit
{
public:
    CppClassUnit( const std::string& name ) : ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const;
};

#endif // CPPCLASSUNIT_H
