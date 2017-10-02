#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, k=0;
    puts(" Enter a.");
    scanf(" %d", &a);

    for (i = 2; i < a; i++){
        if (a % i == 0){
            puts("Composite Number");
            k = 1;
            break;
        }
    }
if (k == 0){
    puts("Prime Number");
}

    return 0;
}
