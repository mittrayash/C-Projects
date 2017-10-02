#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1;
    int a;
    int maxamount= 10;
    printf("How many loops do you want?(1 to 10) ");
    scanf(" %d", &a);
    do {
        printf("%d\n", num);
        num++;
        if (a==num-1){
        break; }

    } while (num<=maxamount);


    return 0;
}
