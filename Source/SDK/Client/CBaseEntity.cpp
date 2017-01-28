/* Ares-Entity */
#include "../../Ares.h"

/* GetFlags */
int CBaseEntity::GetFlags() {
    return *(int*)((DWORD)this + 0x138);
}
