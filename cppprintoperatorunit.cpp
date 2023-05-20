#include "cppprintoperatorunit.h"


std::string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + get_m_text() + "\" );\n";
}
