/* Ares-SDL */
#include "../Ares.h"

/* Variables */
uintptr_t* swapwindow_ptr;
uintptr_t swapwindow_original;
SDL_GLContext Context = nullptr;

/* SwapWindow */
void SDL2::hkSwapWindow(SDL_Window* window) {

	static void(*oSDL_GL_SwapWindow)(SDL_Window*) = reinterpret_cast<void(*)(SDL_Window*)>(swapwindow_original);	

	static SDL_GLContext original_context = SDL_GL_GetCurrentContext();

	if (!Context) {

		Context = SDL_GL_CreateContext(window);
		ImGui_ImplSdl_Init(window);

	}	

	SDL_GL_MakeCurrent(window, Context);

	ImGui_ImplSdl_NewFrame(window);	

	ImGui::GetIO().MouseDrawCursor = true;
	ImGui::GetIO().WantCaptureMouse = true;
	ImGui::GetIO().WantCaptureKeyboard = true;

	ImGui::Text("Hello, world!");

	ImGui::Render();	

	SDL_GL_MakeCurrent(window, original_context);
	oSDL_GL_SwapWindow(window); /* When replacing a pointer to a function with our own
	We must make sure to call the Original, to ensure the original process runs
	smoothly. */

}

/* HookSwapWindow */
void SDL2::SetupSwapWindow() {

	uintptr_t swapwindow_fn = reinterpret_cast<uintptr_t>(dlsym(RTLD_NEXT, "SDL_GL_SwapWindow"));
	swapwindow_ptr = GetAbsoluteAddress<uintptr_t>(swapwindow_fn, 3, 7);
	swapwindow_original = *swapwindow_ptr;
	*swapwindow_ptr = reinterpret_cast<uintptr_t>(&hkSwapWindow);

}