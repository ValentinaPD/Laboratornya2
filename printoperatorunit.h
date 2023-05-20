#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include <QString>
#include "unit.h"

class PrintOperatorUnit:public Unit
{
public:
    explicit PrintOperatorUnit( const std::string& text ) : m_text( text ) { }
    std::string Compile( unsigned int level = 0 ) const override;

private:
    std::string m_text;
protected:
    const std::string& GetMText() const;
};

#endif // PRINTOPERATORUNIT_H
