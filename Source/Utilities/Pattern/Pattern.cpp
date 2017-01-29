/* Ares-Pattern */
#include "../../Ares.h"

/* Compare */
bool Pattern::Compare(const unsigned char* pData, const unsigned char* bMask, const char* szMask) {
	for (; *szMask; ++szMask, ++pData, ++bMask)
		if (*szMask == 'x' && *pData != *bMask)
			return false;

	return (*szMask) == 0;
}

/* FindPattern */
uintptr_t Pattern::FindPattern(uintptr_t dwAddress, uintptr_t dwLen, unsigned char* bMask, const char* szMask) {
	for (uintptr_t i = 0; i < dwLen; i++)
		if (Compare((unsigned char*)(dwAddress + i), bMask, szMask))
			return (uintptr_t)(dwAddress + i);

	return 0;
}
