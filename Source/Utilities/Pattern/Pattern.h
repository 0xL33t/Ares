/* Ares-Pattern */
#pragma once 

/* Pattern Namespace */
namespace Pattern {
    uintptr_t GetLibraryAddress(const char* moduleName);  
    bool Compare(const unsigned char* pData, const unsigned char* bMask, const char* szMask);
    uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, unsigned char* bMask, const char* szMask);
}
