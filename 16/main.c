#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    for (num=1; num<=10; num++){

    if ((num==6)||(num==8)){
        continue;

    }
    printf("Number %d is available!\n", num);
    }

    return 0;
}
