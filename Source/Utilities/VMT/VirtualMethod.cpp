/* Ares-Virtual-Method */
#include "../../Ares.h"

std::unique_ptr<CVMT> g_pClientModeHook;
std::unique_ptr<CVMT> g_pPanelHook;
std::unique_ptr<CVMT> g_pVGuiHook;

/* HookFunction */
bool CVMT::HookFunction(void* pNewFunction, const std::size_t sizeFunctionIndex) {
	if (sizeFunctionIndex > this->m_sizeTotalFunctions)
		return false;

	this->m_pCurrentVFT[sizeFunctionIndex] = reinterpret_cast<std::uintptr_t>(pNewFunction);

	return true;
}

/* UnhookFunction */
bool CVMT::UnhookFunction(const std::size_t sizeFunctionIndex) {
	if (sizeFunctionIndex > this->m_sizeTotalFunctions)
		return false;

	this->m_pCurrentVFT[sizeFunctionIndex] = this->m_iOriginalVFT[sizeFunctionIndex];

	return true;
}

/* GetTotalFunctions */
std::size_t CVMT::GetTotalFunctions() {
	return this->m_sizeTotalFunctions;
}
