#include "unit.h"

void Unit::Add(const std::shared_ptr<Unit>& unit, Flags flags){
    throw std::runtime_error( "Not supported" );
}
std::string Unit::GenerateShift( unsigned int level ) const{
    static const auto DEFAULT_SHIFT = " ";
     std::string result;
     for( unsigned int i = 0; i < level; ++i ) {
     result += DEFAULT_SHIFT;
     }
     return result;

}

