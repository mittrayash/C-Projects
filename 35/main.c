#include <stdio.h>
#include <stdlib.h>
#include "Untitled2.h";
int main()
{
    struct user yash;
    struct user amy;

    yash.userID = 1;
    amy.userID= 2;

    puts("Enter first name for user yash");
    gets(yash.firstName);
    printf("First name for yash is : %s", yash.firstName);


    return 0;
}
