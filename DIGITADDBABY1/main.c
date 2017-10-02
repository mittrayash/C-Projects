#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num= 8654756;
    int i;
    int array[7];

    for (i=0; i<7 ; i++){
    array[i] = num%(int)(pow(10,7-i-1));
    }

for (i=0; i<7; i++){
   printf("%d\n", array[i]);
}
    return 0;
}
