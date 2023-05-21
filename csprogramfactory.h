#ifndef CSPROGRAMFACTORY_H
#define CSPROGRAMFACTORY_H
#include "programfactory.h"
#include "csclassunit.h"
#include "csmethodunit.h"
#include "csprintoperatorunit.h"

class CsProgramFactory: public ProgramFactory
{
public:
    std::unique_ptr < ClassUnit > CreateClass(const std::string& name);
    std::unique_ptr < MethodUnit > CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags);
    std::unique_ptr < PrintOperatorUnit > CreatePrintOperator(const std::string& text );
};

#endif // CSPROGRAMFACTORY_H
