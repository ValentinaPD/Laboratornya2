#include "printoperatorunit.h"

PrintOperatorUnit::PrintOperatorUnit()
{

}
QString PrintOperatorUnit::compile(unsigned int level) const
{
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
