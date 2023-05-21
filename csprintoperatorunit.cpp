#include "csprintoperatorunit.h"

std::string CsPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "System.Out.Print( \"" + m_text + "\" );\n";
}
