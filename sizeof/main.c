#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, k=1, j;
    printf("Enter the number iterations: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
    for(j=1; j<=k; j++){
        printf("%d", i);
    }
    printf("\n");
    k++;
    }
    return 0;
}
