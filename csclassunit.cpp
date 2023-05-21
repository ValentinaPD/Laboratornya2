#include "csclassunit.h"

std::string CsClassUnit::Compile( unsigned int level ) const
{
    std::string result = GenerateShift( level ) + "class " + m_name + "\n{\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i )
    {
       if( m_fields[i].empty() ) {
          continue;
       }
       //result += ACCESS_MODIFIERS[ i ] + ":00\n";
       for( const auto& f : m_fields[i] )
       {
           result +=GenerateShift( level + 1)+ACCESS_MODIFIERS[ i ]+ f->Compile( level + 1 );
       }
     //result += "\n";
    }
    result += GenerateShift( level ) + "};\n";
    return result;
}
