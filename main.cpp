#include <QCoreApplication>
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include <iostream>
#include <memory>
#include <cassert>
#include <cppprogramfactory.h>
#include <csprogramfactory.h>

std::string generateProgram( const std::shared_ptr< ProgramFactory >& program ) {
     std::string str = "MyClass";
     auto myClass = program->CreateClass(str);
     myClass->Add(program->CreateMethod( "testFunc1", "void", 0 ),ClassUnit::PUBLIC);
     myClass->Add(program->CreateMethod( "testFunc2", "void", MethodUnit::STATIC ),ClassUnit::PRIVATE);
     myClass->Add(program->CreateMethod( "testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST ), ClassUnit::PUBLIC);
     std::shared_ptr< MethodUnit > method = program->CreateMethod( "testFunc4", "void",MethodUnit::STATIC );
     method->Add( program->CreatePrintOperator( R"(Hello, world!\n)" ) );
     myClass->Add( method, ClassUnit::PROTECTED );
     return myClass->Compile();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << generateProgram(std::make_shared< CsProgramFactory >()) << std::endl;
    std::cout << generateProgram(std::make_shared< CppProgramFactory >()) << std::endl;
    return a.exec();
}
