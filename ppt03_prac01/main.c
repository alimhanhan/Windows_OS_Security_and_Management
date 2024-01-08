#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b)
{
    int result = 0;

    result = a + b;

    return result;
}

int main()
{
    int x = 10;
    int y = 6;

    printf("Start!\n");

    int result = plus(x,y);

    if(result > 10)
    {
        printf("Good! Result : %d \n", result);
    }
    else
    {
        printf("Bad.... Result : %d \n", result);
    }

    return 0;
}
