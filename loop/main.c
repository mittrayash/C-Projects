#include <stdio.h>
#include <stdlib.h>

int main()
{

 int day = 1;
 float money = 0.01;

 while (day <= 31){

    printf("Day = %d \t Money= %.2f \n", day, money);
    money *= 2;
    day++;
 }


    return 0;
}
