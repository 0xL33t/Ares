/* Ares-Engine */
#pragma once 

/* player_info_s */
typedef struct player_info_s {

    int64_t __pad0;
	union {
	    int64_t xuid;
		struct {
			int xuidlow;
			int xuidhigh;
		};
	};

	char name[128];
	int userid;
	char guid[33];
	unsigned int friendsid;
	char friendsname[128];
	bool fakeplayer;
	bool ishltv;
	unsigned int customfiles[4];
	unsigned char filesdownloaded;

} player_info_t;

/* IVEngineClient */
class IVEngineClient {
public:
    int GetLocalPlayer();
    void ClientCmd_Unrestricted(const char* szCmdString);
    void ExecuteClientCmd(const char* szCmdString);
    void GetScreenSize(int& iWidth, int& iHeight);
    bool GetPlayerInfo(int iIndex, player_info_t* pInfo);
    bool IsTakingScreenshot();
    void GetViewAngles(Vector& vecAngle);
    void SetViewAngles(Vector& vecAngle);
    bool IsInGame();
    bool IsConnected();
}; extern IVEngineClient* g_pEngineClient;
