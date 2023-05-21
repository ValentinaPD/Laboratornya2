#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <string>
#include <vector>
#include <unit.h>
#include <memory>
#include <cassert>

class ClassUnit : public Unit
{
public:
    enum AccessModifier {
     PUBLIC,
     PROTECTED,
     PRIVATE
     };

    static const std::vector< std::string > ACCESS_MODIFIERS;
protected:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;

public:
    explicit ClassUnit( const std::string& name ) : m_name(name){
         m_fields.resize( ACCESS_MODIFIERS.size() );
    }
    void Add(const std::shared_ptr< Unit >& unit, Flags flags );

};

#endif // CLASSUNIT_H
