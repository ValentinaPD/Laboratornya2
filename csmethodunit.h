#ifndef CSMETHODUNIT_H
#define CSMETHODUNIT_H
#include "methodunit.h"

class CsMethodUnit final: public MethodUnit
{
public:
     CsMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :MethodUnit(name,returnType,flags){}
     std::string Compile( unsigned int level ) const;
};

#endif // CSMETHODUNIT_H
