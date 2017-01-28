/* Ares-Header */
#pragma once

/* Dependencies */
#include <unordered_map>
#include <link.h>
#include <dlfcn.h>
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <memory>
#include <vector>
#include <string.h>
#include <list>

/* Utilities */
#include "Utilities/Linker/Linker.h"
#include "Utilities/Pattern/Pattern.h"
#include "Utilities/VMT/VirtualMethod.h"
#include "Utilities/GetAbsoluteAddress.h"
#include "Utilities/Vector.h"
#include "Utilities/GetVFunc.h"
#include "Utilities/Color.h"

/* Setup */
#include "Setup/Setup.h"
#include "Setup/SDL2.h"

/* SDK */

// Client:
#include "SDK/Client/IBaseClientDll.h"
#include "SDK/Client/IClientEntityList.h"
#include "SDK/Client/IClientMode.h"
#include "SDK/Client/CBaseEntity.h"
#include "SDK/Client/CUserCmd.h"

// Engine:
#include "SDK/Engine/IVEngineClient.h"
#include "SDK/Engine/IEngineVGui.h"

// VGui:
#include "SDK/VGui/ISurface.h"
#include "SDK/VGui/IVPanel.h"