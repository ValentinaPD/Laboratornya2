#ifndef CSCLASSUNIT_H
#define CSCLASSUNIT_H
#include "classunit.h"


class CsClassUnit:public ClassUnit
{
public:
    CsClassUnit( const std::string& name ) : ClassUnit(name){}
    std::string Compile( unsigned int level = 0 ) const override;
};

#endif // CSCLASSUNIT_H
