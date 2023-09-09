#include "main.h"

#ifdef NDEBUG
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
auto WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    LPSTR lpCmdLine, int nShowCmd) -> int {
  return main(__argc, __argv);
}
#endif
