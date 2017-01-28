/* Ares-Engine-VGui */
#pragma once 

/* VGUI Namespace */
namespace vgui {
	// handle to an internal vgui panel
	// this is the only handle to a panel that is valid across dll boundaries
	typedef unsigned int VPANEL;

	// handles to vgui objects
	// NULL values signify an invalid value
	typedef unsigned long HScheme;
	// Both -1 and 0 are used for invalid textures. Be careful.
	typedef unsigned long HTexture;
	typedef unsigned long HCursor;
	typedef unsigned long HPanel;
	const HPanel INVALID_PANEL = 0xffffffff;
	typedef unsigned long HFont;
	const HFont INVALID_FONT = 0; // the value of an invalid font handle
}

/* VGUI Panel */
enum VGuiPanel_t {
	PANEL_ROOT = 0,
	PANEL_GAMEUIDLL,
	PANEL_CLIENTDLL,
	PANEL_TOOLS,
	PANEL_INGAMESCREENS,
	PANEL_GAMEDLL,
	PANEL_CLIENTDLL_TOOLS
};

/* PaintMode */
enum PaintMode_t {
	PAINT_UIPANELS = (1 << 0),
	PAINT_INGAMEPANELS = (1 << 1),
	PAINT_CURSOR = (1 << 2),
};

/* IEngineVGui */
class IEngineVGui {
public:
	virtual	~IEngineVGui( void ) { }
	virtual vgui::VPANEL GetPanel( VGuiPanel_t type ) = 0;
	virtual bool IsGameUIVisible() = 0;
}; extern IEngineVGui* g_pEngineVGui;