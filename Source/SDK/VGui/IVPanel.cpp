/* Ares-Panel */
#include "../../Ares.h"

IVPanel* g_pPanel;

/* GetName */
const char* IVPanel::GetName(int Panel) {
	typedef const char*(*OriginalFn)(void*, int);
	return GetVFunc<OriginalFn>(this, 36)(this, Panel);
}