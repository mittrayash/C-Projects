#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, j, k;
scanf("%d", &n);
k = n;
for(i=1; i<=n; i++){
    for(j=k; j>=1; j--){
        printf("%d ", j);
    }
    printf("\n");
k--;
}

 return 0;
}
