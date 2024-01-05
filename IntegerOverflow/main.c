#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    unsigned char maxlen = 0;
    char len = 0;
    char buf[30] = {0, };

    len = strlen(argv[1]);
    if(len>30)
    {
        printf("Error!! Max Size:30\n");
    }
    else{
        printf("Okay!!");
        strcpy(buf, argv[1]);
    }
}
