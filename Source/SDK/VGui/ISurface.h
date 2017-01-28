/* Ares-Surface */
#pragma once 

/* ISurface */
class ISurface {
public:
    void DrawSetColor(int r, int g, int b, int a);
    void DrawSetColor(Color Col);
    void DrawFilledRect(int x0, int y0, int x1, int y1);
}; extern ISurface* g_pSurface;