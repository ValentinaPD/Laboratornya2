#include "csprintoperatorunit.h"

std::string CsPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "printf( \"" + GetMText() + "\" );\n";
}
