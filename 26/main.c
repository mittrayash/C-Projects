#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year1;
    int year2;
    int age;
    printf("Enter year 1!\n");
    scanf(" %d", &year1);
    printf("Enter year 2!\n");
    scanf(" %d", &year2);
    age = year1 - year2;
    printf("age = %d", abs(age));


    return 0;
}
