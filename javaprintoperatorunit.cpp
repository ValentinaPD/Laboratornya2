#include "javaprintoperatorunit.h"

std::string JavaPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "System.out.println( \"" + m_text + "\" );\n";
}
