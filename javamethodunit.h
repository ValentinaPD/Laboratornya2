#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H
#include "methodunit.h"

class JavaMethodUnit final: public MethodUnit
{
public:
    JavaMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :MethodUnit(name,returnType,flags){}
    std::string Compile( unsigned int level ) const;
};

#endif // JAVAMETHODUNIT_H
