#ifndef CPPPROGRAMFACTORY_H
#define CPPPROGRAMFACTORY_H
#include "programfactory.h"

class CppProgramFactory:ProgramFactory
{
public:
    std::shared_ptr < ClassUnit > CreateClass(const std::string& name);
    std::shared_ptr < MethodUnit > CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags);
    std::shared_ptr < PrintOperatorUnit > CreatePrintOperator(const std::string& text );
};

#endif // CPPPROGRAMFACTORY_H
