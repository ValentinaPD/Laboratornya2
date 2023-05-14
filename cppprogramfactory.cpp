#include "cppprogramfactory.h"

std::shared_ptr < ClassUnit > CppProgramFactory::CreateClass(const std::string& name)
{
    return std::shared_ptr < ClassUnit >(new CppClassUnit(name));
}
std::shared_ptr < MethodUnit > CppProgramFactory::CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags)
{
    return std::shared_ptr < MethodUnit >(new CppMethodUnit(name,returnType,flags));
}
std::shared_ptr < PrintOperatorUnit > CppProgramFactory::CreatePrintOperator(const std::string& text )
{
    return std::shared_ptr < PrintOperatorUnit >(new CppPrintOperatorUnit(text));
}
