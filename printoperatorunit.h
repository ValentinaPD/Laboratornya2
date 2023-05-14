#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include <QString>
#include "unit.h"

class PrintOperatorUnit:public Unit
{
public:
    explicit PrintOperatorUnit( const std::string& text ) : m_text( text ) { }
   // std::string compile( unsigned int level = 0 ) const = 0;
    //virtual ~PrintOperatorUnit() = default;
private:
    std::string m_text;
protected:
    const std::string& get_m_text() const;
};

#endif // PRINTOPERATORUNIT_H
