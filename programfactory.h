#ifndef PROGRAMFACTORY_H
#define PROGRAMFACTORY_H
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include "unit.h"
class ProgramFactory
{
public:

    virtual std::unique_ptr < ClassUnit > CreateClass(const std::string& name) = 0;
    virtual std::unique_ptr < MethodUnit > CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags) = 0;
    virtual std::unique_ptr < PrintOperatorUnit > CreatePrintOperator(const std::string& text ) = 0;
    virtual ~ProgramFactory() = default;
};

#endif // PROGRAMFACTORY_H
