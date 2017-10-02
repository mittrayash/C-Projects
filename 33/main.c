#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    int tuna[5]= {23,44,541,23,34};

    printf("Element \t Address \t Value \n");
    for (i=0; i<5; i++){
    printf("tuna[%d] \t %p \t       %d\n", i, &tuna[i], tuna[i]);
    }
    printf(" %p", (tuna));
    printf(" %d", *(tuna+2));

    return 0;
}
