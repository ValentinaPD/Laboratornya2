#include "classunit.h"

const std::vector<std::string> ClassUnit::ACCESS_MODIFIERS = { "public","protected", "private", "internal", "protected internal", "private protected"};


void ClassUnit::Add( const std::shared_ptr<Unit>& unit, Flags flags )
{

    int accessModifier = PRIVATE;
    if( flags < ACCESS_MODIFIERS.size() )
    {
       accessModifier = flags;
    }
    m_fields[accessModifier].push_back( unit );
}


