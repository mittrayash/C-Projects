#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, i, j ,k , m=1;
puts(" Enter n");
    scanf(" %d", &n);
    num = n;
    for (i=1; i<=n; i++){

        for(j=1; j<=num; j++){

            printf(" ");

        }
          num--;
        for(k=1; k<=i; k++,m++){
            printf("%d ", m);

        }

        printf("\n");
    }


    return 0;
}
