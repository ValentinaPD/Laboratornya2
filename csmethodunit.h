#ifndef CSMETHODUNIT_H
#define CSMETHODUNIT_H
#include "methodunit.h"

class CsMethodUnit: public MethodUnit
{
public:
     CsMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :MethodUnit(name,returnType,flags){}
     std::string Compile( unsigned int level ) const override;
};

#endif // CSMETHODUNIT_H
