/* Ares-Engine */
#include "../../Ares.h"

IVEngineClient* g_pEngineClient;

/* GetLocalPlayer */
int IVEngineClient::GetLocalPlayer() {
	typedef int(*OriginalFn)(void*);
	return GetVFunc<OriginalFn>(this, 12)(this);
}

/* ClientCmd_Unrestricted */
void IVEngineClient::ClientCmd_Unrestricted(const char* szCmdString) {
	typedef void(*OriginalFn)(void*, const char*);
	return GetVFunc<OriginalFn>(this, 113)(this, szCmdString);	
}

/* ExecuteClientCmd */
void IVEngineClient::ExecuteClientCmd(const char* szCmdString) {
	typedef void(*OriginalFn)(void*, const char*);
	return GetVFunc<OriginalFn>(this, 108)(this, szCmdString);
}

/* GetScreenSize */
void IVEngineClient::GetScreenSize(int& iWidth, int& iHeight) {
	typedef void(*OriginalFn)(void*, int&, int&);
	return GetVFunc<OriginalFn>(this, 5)(this, iWidth, iHeight);
}

/* IsTakingScreenshot */
bool IVEngineClient::IsTakingScreenshot() {
	typedef bool(*OriginalFn)(void*);
	return GetVFunc<OriginalFn>(this, 92)(this);
}

/* GetViewAngles */
void IVEngineClient::GetViewAngles(Vector& vecAngle) {
	typedef void(*OriginalFn)(void*, Vector&);
	return GetVFunc<OriginalFn>(this, 18)(this, vecAngle);
}

/* SetViewAngles */
void IVEngineClient::SetViewAngles(Vector& vecAngle) {
	typedef void(*OriginalFn)(void*, Vector&);
	return GetVFunc<OriginalFn>(this, 19)(this, vecAngle);
}

/* IsInGame */
bool IVEngineClient::IsInGame() {
	typedef bool(*OriginalFn)(void*);
	return GetVFunc<OriginalFn>(this, 26)(this);
}

/* IsConnected */
bool IVEngineClient::IsConnected() {
	typedef bool(*OriginalFn)(void*);
	return GetVFunc<OriginalFn>(this, 27)(this);
}
