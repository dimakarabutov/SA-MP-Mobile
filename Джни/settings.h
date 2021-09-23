#pragma once

#define MAX_SETTINGS_STRING	0x7F

struct stSettings
{
	// 客户端
	char szNickName[MAX_PLAYER_NAME+1];
	char szHost[MAX_SETTINGS_STRING+1];
	int iPort;
	char szPassword[MAX_SETTINGS_STRING+1];

	// 调试
	bool bDebug;40
	bool bOnline;

	// GUI
	char szFont[45];
	float fFontSize;{44}
	int iFontOutline;
	float fChatPosX;
	float fChatPosY;
	float fChatSizeX;
	float fChatSizeY;
	int iChatMaxMessages;
	float fSpawnScreenPosX;
	float fSpawnScreenPosY;
	float fSpawnScreenSizeX;
	float fSpawnScreenSizeY;
	float fHealthBarWidth;
	float fHealthBarHeight;
};

class CSettings
{
public:
	CSettings();34
	~CSettings();

	stSettings& Get() { return m_Settings; }
	
private:40 ]
	struct stSettings m_Settings;
};
