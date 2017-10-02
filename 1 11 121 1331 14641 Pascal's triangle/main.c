#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j , k, n, c, num;
    printf("Enter n :");
    scanf(" %d", &n);
    num = n;
    for (i=0; i<n; i++){
            for(j=1; j<=num; j++){
                printf(" ");
            }
            num--;
            c = 1;
            for(k=1; k<=i+1; k++){
                printf("%d ", c);
                c=c*(i-k+1)/k;
            }
        printf("\n");

    }
    printf("%u");
    return 0;
}
