#include "windows.h"
#include "tchar.h"

int _tmain(int argc, TCHAR *argv[])
{
    MessageBox(NULL,
               TEXT("Hello World!"),
               TEXT("www.swu.ac.kr"),
               MB_OK);

    return 0;
}
