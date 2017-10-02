#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, k, n;
   printf("Enter n");
   scanf(" %d", &n);
  int num = n;
   for(i=1; i<=n; i++){
    for (j=1; j<num; j++){
        printf("   ");

    }
    num--;
    for(k=1; k<=i; k++){
        printf("%d    ", i);
    }
    printf("\n");
   }



    return 0;
}
