#include "cppprintoperatorunit.h"


std::string CppPrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "printf( \"" + GetMText() + "\" );\n";
}
