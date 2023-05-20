#include "classunit.h"

const std::vector<std::string> ClassUnit::ACCESS_MODIFIERS = { "public",
"protected", "private" };


void ClassUnit::Add( const std::shared_ptr<Unit>& unit, Flags flags )
{

    int accessModifier = PRIVATE;
    if( flags < ACCESS_MODIFIERS.size() )
    {
       accessModifier = flags;
    }
    m_fields[accessModifier].push_back( unit );
}

const std::string& ClassUnit::GetMName() const
{
    return m_name;
}
const ClassUnit::Fields& ClassUnit::GetFields(int i)const
{
    return m_fields[i];
}
