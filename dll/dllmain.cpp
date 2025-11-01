#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dReason, LPVOID lpReserved)
{
    switch (dReason)
    {
        case DLL_PROCESS_ATTACH:
        {
            auto ptr = new int;
            delete ptr;
            //delete ptr;

            MessageBoxA(NULL, "DLL Loaded", "DllMain", MB_OK);
            break;
        }

        case DLL_THREAD_ATTACH:
        {
            break;
        }

        case DLL_THREAD_DETACH:
        {
            break;
        }

        case DLL_PROCESS_DETACH:
        {
            MessageBoxA(NULL, "DLL Unloaded", "DllMain", MB_OK);
            break;
        }
    }

    return TRUE;
}