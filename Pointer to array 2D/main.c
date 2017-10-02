#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*p)[3];
    int arr[][3] = {{2,3,4}, {3,4,5}, {4,5,6}};
    int i, j, *pint;

    for(i=0; i<3; i++){
    p = &arr[i];
    pint = p + i;
    for (j=0; j<3; j++){
        printf("%d ", (pint + j));
    }
    printf("\n");
    }
    return 0;
}
