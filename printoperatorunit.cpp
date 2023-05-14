#include "printoperatorunit.h"


/*
std::string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}*/
const std::string& PrintOperatorUnit::get_m_text() const
{
    return m_text;
}
