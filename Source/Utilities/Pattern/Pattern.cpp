/* Ares-Pattern */
#include "../../Ares.h"

/* GetProcessLibraries */
std::unordered_map<const char*, uintptr_t> GetProcessLibraries() {
	std::unordered_map<const char*, uintptr_t> modules;

	dl_iterate_phdr([](struct dl_phdr_info* info, size_t size, void* data) {
		reinterpret_cast<std::unordered_map<const char*, uintptr_t>*>(data)->insert({ info->dlpi_name, reinterpret_cast<uintptr_t>(info->dlpi_addr + info->dlpi_phdr[0].p_vaddr) });
		return 0;
	}, &modules);

	return modules;
}

/* GetLibraryInformation */
uintptr_t Pattern::GetLibraryAddress(const char* moduleName) {
	std::unordered_map<const char*, uintptr_t> modules = GetProcessLibraries();

	for (auto module : modules)
		if (strcasestr(module.first, moduleName))
			return module.second;

	return 0;
}

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