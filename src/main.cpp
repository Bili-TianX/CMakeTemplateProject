#if NDEBUG
#define _AMD64_ // NOLINT(*-reserved-identifier)
#include <minwindef.h>

int WINAPI WinMain(
    _In_ [[maybe_unused]] HINSTANCE hInstance,
    _In_opt_ [[maybe_unused]] HINSTANCE hPrevInstance,
    _In_ [[maybe_unused]] LPSTR lpCmdLine,
    _In_ [[maybe_unused]] int nShowCmd
)
#else
int main()
#endif
{
  return 0;
}
