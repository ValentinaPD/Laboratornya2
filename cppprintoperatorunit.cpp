#include "cppprintoperatorunit.h"


std::string CppPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "printf( \"" + m_text + "\" );\n";
}
