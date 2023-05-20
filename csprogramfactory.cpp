#include "csprogramfactory.h"

std::shared_ptr < ClassUnit > CsProgramFactory::CreateClass(const std::string& name)
{
    return std::shared_ptr < ClassUnit >(new CsClassUnit(name));
}
std::shared_ptr < MethodUnit > CsProgramFactory::CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags)
{
    return std::shared_ptr < MethodUnit >(new CsMethodUnit(name,returnType,flags));
}
std::shared_ptr < PrintOperatorUnit > CsProgramFactory::CreatePrintOperator(const std::string& text )
{
    return std::shared_ptr < PrintOperatorUnit >(new CsPrintOperatorUnit(text));
}
