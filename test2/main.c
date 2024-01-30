#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int sum(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int x = 9;
    int y = 7;

    printf("sum : %d \n", sum(x, y));
    printf("minus : %d \n", minus(x, y));

    return 0;
}
