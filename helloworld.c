/*Hello World*/
#include <stdio.h>
#include "helloworld.h"
int main()
{

    int checkRetVal;

    checkRetVal = 1;

    #ifdef DEBUGMODE /*check whether a macro is defined*/
    printf("DEBUGMODE\n"); /*Will only run this line if compiled with -D followoed by DEBUGMODE as an argument*/
    #endif

    checkRetVal = printHello();

    if(checkRetVal != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int printHello()
{
    printf("Hello World ! ! !\n");
    return 0;
}
