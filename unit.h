#ifndef UNIT_H
#define UNIT_H
#include <string>
#include <memory>
#include <cassert>
class Unit
{
private:

public:
    using Flags = unsigned int;
    Unit();
    virtual void Add(const std::shared_ptr<Unit>& unit, Flags flags);
    virtual std::string Compile( unsigned int level = 0 ) const = 0;
    virtual ~Unit() = default;
protected:
    virtual std::string GenerateShift( unsigned int level ) const;


};


#endif // UNIT_H
