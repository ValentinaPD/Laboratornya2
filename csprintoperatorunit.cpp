#include "csprintoperatorunit.h"

std::string CsPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "Console.WriteLine( \"" + m_text + "\" );\n";
}
