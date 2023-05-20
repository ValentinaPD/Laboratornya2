#include "methodunit.h"

void MethodUnit::Add(const std::shared_ptr<Unit>& unit, Flags /* flags */  )
{
   m_body.push_back( unit );
}
/*
std::string MethodUnit::GetMName()
{
    return m_name;
}
std::string MethodUnit::GetMBody()
{
    return m_body;
}
MethodUnit::Flags MethodUnit::GetMFlags()
{
    return m_flags;
}
*/
