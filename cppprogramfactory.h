#ifndef CPPPROGRAMFACTORY_H
#define CPPPROGRAMFACTORY_H
#include "programfactory.h"
#include "cppclassunit.h"
#include "cppmethodunit.h"
#include "cppprintoperatorunit.h"
class CppProgramFactory:public ProgramFactory
{
public:
    std::unique_ptr < ClassUnit > CreateClass(const std::string& name);
    std::unique_ptr < MethodUnit > CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags);
    std::unique_ptr < PrintOperatorUnit > CreatePrintOperator(const std::string& text );
};

#endif // CPPPROGRAMFACTORY_H
