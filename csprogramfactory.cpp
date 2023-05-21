#include "csprogramfactory.h"

std::unique_ptr < ClassUnit > CsProgramFactory::CreateClass(const std::string& name)
{
    return std::unique_ptr < ClassUnit >(new CsClassUnit(name));
}
std::unique_ptr < MethodUnit > CsProgramFactory::CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags)
{
    return std::unique_ptr < MethodUnit >(new CsMethodUnit(name,returnType,flags));
}
std::unique_ptr < PrintOperatorUnit > CsProgramFactory::CreatePrintOperator(const std::string& text )
{
    return std::unique_ptr < PrintOperatorUnit >(new CsPrintOperatorUnit(text));
}
