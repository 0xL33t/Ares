/* Ares-Pattern */
#pragma once 

/* Pattern Namespace */
namespace Pattern {
    bool Compare(const unsigned char* pData, const unsigned char* bMask, const char* szMask);
    uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, unsigned char* bMask, const char* szMask);
}
