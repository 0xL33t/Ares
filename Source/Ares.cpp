/*
    _              
   /_\  _ _ ___ ___
  / _ \| '_/ -_|_-<
 /_/ \_\_| \___/__/
      
*/
#include "Ares.h"

void __attribute__((constructor)) Ares_Init() {
  SDL2::SetupSwapWindow();
  Setup::SetupInterfaces();
  Setup::SetupHooks();
}
