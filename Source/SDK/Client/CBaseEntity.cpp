/* Ares-Entity */
#include "../../Ares.h"

/* GetFlags */
int CBaseEntity::GetFlags() {
    return *(int*)((uintptr_t)this + 0x138); // returns m_fFlags
}
