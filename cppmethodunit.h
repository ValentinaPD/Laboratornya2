#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include "methodunit.h"

class CppMethodUnit final:public MethodUnit
{
public:
    CppMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :MethodUnit(name,returnType,flags){}
    std::string Compile( unsigned int level ) const;
};

#endif // CPPMETHODUNIT_H
