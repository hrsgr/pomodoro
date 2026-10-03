#include <windows.h>
#pragma comment(lib, "user32.lib")

int main()
{
    MessageBoxW(
        NULL,
        L"Hello Windows!",
        L"テスト",
        MB_OK
    );

    return 0;
}