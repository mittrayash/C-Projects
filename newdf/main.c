#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, j, k, n, num;
   printf("Enter num: ");
   scanf("%d", &n);
num = n;
   for (i=n; i>=1; i--){
    for(j=1; j<=i; j++){
        printf(" ");
    }
    num = n;

    for(k=1; k<=n-i+1; k++){
        printf("%d", num-i+1);
        num--;
    }

    printf("\n");

   }

return 0;
}
