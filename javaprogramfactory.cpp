#include "javaprogramfactory.h"

std::unique_ptr < ClassUnit > JavaProgramFactory::CreateClass(const std::string& name)
{
    return std::unique_ptr < ClassUnit >(new JavaClassUnit(name));
}
std::unique_ptr < MethodUnit > JavaProgramFactory::CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags)
{
    return std::unique_ptr < MethodUnit >(new JavaMethodUnit(name,returnType,flags));
}
std::unique_ptr < PrintOperatorUnit > JavaProgramFactory::CreatePrintOperator(const std::string& text )
{
    return std::unique_ptr < PrintOperatorUnit >(new JavaPrintOperatorUnit(text));
}
