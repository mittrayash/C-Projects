#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int Max = 10;
    int howmany;


    printf("How many times do you want this loop to loop? (0-10): ");
    scanf(" %d", &a);
    for (howmany=1; howmany<= Max; howmany++){
        printf(" %d\n", howmany);
         if (howmany==a){
            break;
         }
    }

    return 0;
}
