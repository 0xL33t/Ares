/* Ares-Entity */
#include "../../Ares.h"

/* GetFlags */
int CBaseEntity::GetFlags() {
    return *(int*)(this + 0x138);
}