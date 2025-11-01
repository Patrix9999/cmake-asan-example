#include <Windows.h>
#include <cstdio>

int main()
{
    HMODULE lib = LoadLibraryA("../dll/dll.dll");
    if (!lib)
    {
        printf("Library not loaded!\n");
        return -1;
    }

    printf("All good.\n");
    return 0;
}