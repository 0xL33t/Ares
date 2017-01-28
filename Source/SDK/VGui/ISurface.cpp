/* Ares-Surface */
#include "../../Ares.h"

ISurface* g_pSurface;

/* DrawSetColor */
void ISurface::DrawSetColor(int r, int g, int b, int a) {
	typedef void(*OriginalFn)(void*, int, int, int, int);
	return GetVFunc<OriginalFn>(this, 14)(this, r, g, b, a);
}

/* DrawSetColor */
void ISurface::DrawSetColor(Color Col) {
    typedef void(*OriginalFn)(void*, Color);
	return GetVFunc<OriginalFn>(this, 14)(this, Col);
}

/* DrawFilledRect */
void ISurface::DrawFilledRect(int x0, int y0, int x1, int y1) {
	typedef void(*OriginalFn)(void*, int, int, int, int);
	return GetVFunc<OriginalFn>(this, 16)(this, x0, y0, x1, y1);
}