#ifndef JAVAPROGRAMFACTORY_H
#define JAVAPROGRAMFACTORY_H
#include "programfactory.h"
#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintoperatorunit.h"

class JavaProgramFactory: public ProgramFactory
{
public:
    std::unique_ptr < ClassUnit > CreateClass(const std::string& name);
    std::unique_ptr < MethodUnit > CreateMethod(const std::string& name, const std::string& returnType, Unit::Flags flags);
    std::unique_ptr < PrintOperatorUnit > CreatePrintOperator(const std::string& text );
};

#endif // JAVAPROGRAMFACTORY_H
