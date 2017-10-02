#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, l, n, num, m=1;

    puts("Enter n");
    scanf("%d", &n);
    num = n;
    for (i=1; i<=n; i++){
            for(j=1; j<=num; j++){
                printf(" ");
            }
            num--;
    m=i;
    for (j=1; j<=i; j++){

        printf("%d ", m);
        m++;
    }
    m = 2*(i-1);
    for(l=1; l<i; l++){
        printf("%d ", m--);
    }
        printf("\n");
    }
    return 0;
}
