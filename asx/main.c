#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, n;
    int i=1;
    puts("Enter the number.");
    scanf(" %d", &num);

    while (1){
        n = num%((int)pow(10,i));
       if ( n == num ){
            printf("Number of digits = %d", i);
            break;
    }
    i++;
    }
    return 0;
}
