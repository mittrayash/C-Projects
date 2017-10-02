#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j, p;
    printf("Enter any number: ");
    scanf("%d", &num);
    for (i=2; i<=num; i++){
        for (j=2; j<i; j++){
        if (i%j == 0){
              p = 0;
            break;
        }
        p = 1;
    }
    if (p)
        printf("%d\n", i);
    }

    return 0;
}
