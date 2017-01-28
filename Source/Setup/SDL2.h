/* Ares-SDL */
#pragma once 

/* Dependencies */
#include "../ImGUI/imgui.h"
#include "../ImGUI/imgui_impl_sdl.h"
#include "../ImGUI/imgui_internal.h"

/* Variables */
extern uintptr_t* swapwindow_ptr;
extern uintptr_t swapwindow_original;

/* SDL2 Namespace */
namespace SDL2 {
	void hkSwapWindow(SDL_Window*);    
	void SetupSwapWindow();
}