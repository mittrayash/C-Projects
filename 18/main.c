#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char tuna;
    printf("Enter a singleton (digit/alphabet/alphanumeric): ");
    scanf(" %s", tuna);
    printf("\n");
    if ( isalpha (tuna) ){
    printf("%s is a alphabet.", tuna);}
    else if ( isdigit (tuna)){
        printf("%s is a digit.", tuna);
    }
    else
        printf("%s is a alphanumeric.", tuna);
    return 0;
}
