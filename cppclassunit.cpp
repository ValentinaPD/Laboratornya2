#include "cppclassunit.h"

std::string CppClassUnit::compile( unsigned int level ) const
{
    std::string result = generateShift( level ) + "class " + get_m_name() + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i )
    {
       if( getFields(i).empty() ) {
          continue;
       }
       result += ACCESS_MODIFIERS[ i ] + ":\n";
       for( const auto& f : getFields(i) )
       {
           result += f->compile( level + 1 );
       }
     result += "\n";
    }
    result += generateShift( level ) + "};\n";
    return result;
}
