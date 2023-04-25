#include "unit.h"

Unit::Unit()
{


}
void Unit::add(const QSharedPointer<Unit>& , Flags flags){
    throw std::runtime_error( "Not supported" );
}
QString Unit::generateShift( unsigned int level ) const{
    static const auto DEFAULT_SHIFT = " ";
     QString result;
     for( unsigned int i = 0; i < level; ++i ) {
     result += DEFAULT_SHIFT;
     }
     return result;

}

