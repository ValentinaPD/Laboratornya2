#include "cppmethodunit.h"

std::string CppMethodUnit::Compile( unsigned int level ) const
{
    std::string result = GenerateShift( level );
    if( m_flags & STATIC )
    {
        result += "static ";
    }
    else if( m_flags & VIRTUAL )
    {
        result += "virtual ";
    }
    result += m_returnType + " ";
    result += m_name + "()";

    if( m_flags & CONST ) {
        result += " const";
    }
    result += " {\n";
    for( const auto& b : m_body )
    {
        result += b->Compile( level + 1 );
    }
    result += GenerateShift( level ) + "}\n";
    return result;
}
