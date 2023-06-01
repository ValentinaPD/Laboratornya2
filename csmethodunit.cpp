#include "csmethodunit.h"

std::string CsMethodUnit::Compile( unsigned int level ) const
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
    else if( m_flags & ABSTARCT )
    {
        result += "abstract ";
    }
    else if( m_flags & EXTERN )
    {
        result += "extern ";
    }
    result += m_returnType + " ";
    result += m_name + "()";

    result += "\n"+GenerateShift( level )+"{\n";
    for( const auto& b : m_body )
    {
        result += b->Compile( level + 1 );
    }
    result +=  GenerateShift( level ) + "}\n";
    return result;
}
