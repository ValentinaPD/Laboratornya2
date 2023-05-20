#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include "methodunit.h"

class CppMethodUnit:public MethodUnit
{
public:
    CppMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :MethodUnit(name,returnType,flags){}
    std::string Compile( unsigned int level ) const override;
};

#endif // CPPMETHODUNIT_H
