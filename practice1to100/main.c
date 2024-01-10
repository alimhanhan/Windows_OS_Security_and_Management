#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    for(int i=1; i<101; i++)
    {
        num = num + i;
    }

    printf("Result: %d", num);
    return 0;
}
