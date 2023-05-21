#include "cppprogramfactory.h"

std::unique_ptr < ClassUnit > CppProgramFactory::CreateClass(const std::string& name)
{
    return std::unique_ptr < ClassUnit >(new CppClassUnit(name));
}
std::unique_ptr < MethodUnit > CppProgramFactory::CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags)
{
    return std::unique_ptr < MethodUnit >(new CppMethodUnit(name,returnType,flags));
}
std::unique_ptr < PrintOperatorUnit > CppProgramFactory::CreatePrintOperator(const std::string& text )
{
    return std::unique_ptr < PrintOperatorUnit >(new CppPrintOperatorUnit(text));
}
