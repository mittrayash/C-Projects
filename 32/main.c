#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tuna = 20;
    int *ptuna= &tuna;
     int *pptuna= &ptuna;

    printf("Address \t Variable \t Value \n");
    printf("%p \t %s \t          %d\n", &tuna, "tuna", tuna);
    printf("%p \t %s \t         %p\n", &ptuna, "ptuna", ptuna);
    printf("%p \t %s \t %p\n", &pptuna, "pptuna", &ptuna);

 printf("*ptuna: %d\n", *ptuna);
    return 0;
}
