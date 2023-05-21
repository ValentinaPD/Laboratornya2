#include "cppclassunit.h"

std::string CppClassUnit::Compile( unsigned int level ) const
{
    std::string result = GenerateShift( level ) + "class " + m_name + " {\n";
    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i )
    {
       // if(ACCESS_MODIFIERS[i] == PUBLIC || ACCESS_MODIFIERS[i] == PROTECTED || ACCESS_MODIFIERS[i] == PRIVATE){
           if( m_fields[i].empty() ) {
              continue;
           }
           result += ACCESS_MODIFIERS[ i ] + ":\n";
           for( const auto& f : m_fields[i] )
           {
               result += f->Compile( level + 1 );
           }
            result += "\n";
        }
  //  }
    result += GenerateShift( level ) + "};\n";
    return result;
}
