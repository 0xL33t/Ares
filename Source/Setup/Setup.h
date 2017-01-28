/* Ares-Setup */
#pragma once 

/* Typedefinitions */
typedef void* (*CreateInterfaceFn)(const char *szName, int *iReturn);

/* Setup Namespace */
namespace Setup {
    void SetupSurfaceDrawing();
    void SetupInterfaces();
    void SetupHooks();
}