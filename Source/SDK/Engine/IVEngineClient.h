/* Ares-Engine */
#pragma once 

/* IVEngineClient */
class IVEngineClient {
public:
    int GetLocalPlayer();
    void ClientCmd_Unrestricted(const char* szCmdString);
    void ExecuteClientCmd(const char* szCmdString);
    void GetScreenSize(int& iWidth, int& iHeight);
    bool IsTakingScreenshot();
    void GetViewAngles(Vector& vecAngle);
    void SetViewAngles(Vector& vecAngle);
    bool IsInGame();
    bool IsConnected();
}; extern IVEngineClient* g_pEngineClient;
