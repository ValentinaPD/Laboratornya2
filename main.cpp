#include <QCoreApplication>
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include <iostream>
#include <memory>
#include <cassert>
#include <cppprogramfactory.h>

std::string generateProgram() {
     CppProgramFactory cppProgram;
     std::string str = "MyClass";
     std::shared_ptr < ClassUnit > myClass = cppProgram.CreateClass(str);
     myClass->Add(std::make_shared< MethodUnit >( "testFunc1", "void", 0 ),ClassUnit::PUBLIC);
     myClass->Add(std::make_shared< MethodUnit >( "testFunc2", "void", MethodUnit::STATIC ),ClassUnit::PRIVATE);
     myClass->Add(std::make_shared< MethodUnit >( "testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST ), ClassUnit::PUBLIC);
     auto method = std::make_shared< MethodUnit >( "testFunc4", "void",MethodUnit::STATIC );
     method->Add( std::make_shared< PrintOperatorUnit >( R"(Hello, world!\n)" ) );
     myClass->Add( method, ClassUnit::PROTECTED );
     return myClass->Compile();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << generateProgram() << std::endl;
    return a.exec();
}
