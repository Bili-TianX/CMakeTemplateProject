#ifdef NDEBUG
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
auto WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    LPSTR lpCmdLine, int nShowCmd) -> int
#else
auto main(int argc, char* argv[]) -> int
#endif
{
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
