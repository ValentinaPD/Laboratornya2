#include "cppprintoperatorunit.h"


std::string PrintOperatorUnit::Compile(unsigned int level) const
{
    return GenerateShift(level) + "printf( \"" + GetMText() + "\" );\n";
}
