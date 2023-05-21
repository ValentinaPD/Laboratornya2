#include "methodunit.h"

void MethodUnit::Add(const std::shared_ptr<Unit>& unit, Flags /* flags */  )
{
   m_body.push_back( unit );
}
