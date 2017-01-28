/* Ares-Engine */
#include "../../Ares.h"

IVEngineClient* g_pEngineClient;

/* GetLocalPlayer */
int IVEngineClient::GetLocalPlayer() {
	typedef int(*OriginalFn)(void*);
	return GetVFunc<OriginalFn>(this, 12)(this);
}
