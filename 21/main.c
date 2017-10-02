#include <stdio.h>
#include <stdlib.h>

int main()
{
   char passwd[4];
    printf("Enter a 3 digit password containing an alphabet, a number and an $ sign. ");
    scanf(" %s", passwd);
    printf("%s", passwd);
     if (isdigit(passwd[0]) || isdigit(passwd[1]) || isdigit(passwd[2])){
        printf("Password contains an number (y)\n");
    } else { printf("Wrong password!");}

    return 0;
}
