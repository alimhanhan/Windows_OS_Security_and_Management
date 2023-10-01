#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    int c = a + b;

    return c;
}

int min(int a, int b)
{
    int d = a - b;

    return d;
}

int main()
{
    int a = 30;
    int b = 20;

    printf("%d + %d = %d\n", a, b, add(a,b));
    printf("%d - %d = %d", a, b, min(a,b));

    return 0;
}
