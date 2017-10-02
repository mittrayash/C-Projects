
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main()
{
    char passwd[4];
    printf("Enter a 3 digit password containing an alphabet, a number and an $ sign. ");
    scanf(" %s", passwd);
    if (isalpha(passwd[0]) || isalpha(passwd[1]) || isalpha(passwd[2])){
        printf("Password contains an alphabet (y)\n");
    } else { printf("Wrong password! No alphabet.");}

    if (isdigit(passwd[0]) || isdigit(passwd[1]) || isdigit(passwd[2])){
        printf("Password contains a number (y)\n");
    } else { printf("Wrong password! No number!");}

    if (passwd[0]=='$' || passwd[1]=='$' || passwd[2]=='$'){
        printf("Password contains an alphanumeric($) (y)\n");
    } else { printf("Wrong password!, No $ sign");}

        return 0;
}
