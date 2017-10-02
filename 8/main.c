#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;
    printf("Please enter your age. \n ");
    scanf(" %d", &age);
    printf("Please state your gender. (m/f)\n");
    scanf(" %c", &gender);
    if (age>=18) {
        printf ("You may enter!");
        if (gender=='m') {
            printf("boy.\n");
        }
        if (gender=='f'){
            printf("m'lady\n");
        }
    }
    if (age<18){
       printf("Sorry");
    }



    return 0;
}
