#ifndef METHODUNIT_H
#define METHODUNIT_H
#include <string>
#include <vector>
#include <memory>
#include <cassert>
#include "unit.h"


class MethodUnit:public Unit
{
protected:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector<std::shared_ptr<Unit>>  m_body;
public:
     enum Modifier {
     STATIC = 1,
     CONST = 1 << 1,
     VIRTUAL = 1 << 2
     };

public:
    MethodUnit( const std::string& name, const std::string& returnType, Flags flags ) : m_name( name ), m_returnType( returnType ), m_flags( flags ){}
    void Add(const std::shared_ptr<Unit>& unit, Flags /* flags */ = 0 );
    std::string Compile( unsigned int level = 0 ) const;
    //std::string GetMName();
    //std::string GetMReturnType();
    //Flags GetMFlags();

};

#endif // METHODUNIT_H
