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
private:
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;



public:
    explicit ClassUnit( const std::string& name ) : m_name(name){
         m_fields.resize( ACCESS_MODIFIERS.size() );
    }
    void add(const std::shared_ptr< Unit >& unit, Flags flags );
    std::string compile( unsigned int level = 0 ) const = 0;
    //~ClassUnit() = default;
protected:
    const std::string& get_m_name()const;
    const Fields& getFields(int i)const;
   //std::string generateShift( unsigned int level ) const;
};

#endif // CLASSUNIT_H
