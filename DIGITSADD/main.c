#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num= 8654756;
    int i;
    int array[7];

    for (i=0; i<7 ; i++){
    array[i] = num%(int)(pow(10,i+1));// 4756-5621 & 56-77//
    }

for (i=0; i<7; i++){
   printf("%d\n", array[i]);
}
    return 0;
}
