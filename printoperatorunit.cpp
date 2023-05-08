#include "printoperatorunit.h"

PrintOperatorUnit::PrintOperatorUnit()
{

}
std::string PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
