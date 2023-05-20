#include "csclassunit.h"

std::string CsClassUnit::Compile( unsigned int level ) const
{
    std::string result = GenerateShift( level ) + "class " + GetMName() + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i )
    {
       if( GetFields(i).empty() ) {
          continue;
       }
       result += ACCESS_MODIFIERS[ i ] + ":\n";
       for( const auto& f : GetFields(i) )
       {
           result += f->Compile( level + 1 );
       }
     result += "\n";
    }
    result += GenerateShift( level ) + "};\n";
    return result;
}
