#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char tuna;
    printf("Enter a singleton (digit/alphabet/alphanumeric): ");
    scanf(" %c", &tuna);
    printf("\n");
    if ( isalpha(tuna) ){
    printf("%c is a alphabet.", tuna);}
    else if ( isdigit(tuna)){
        printf("%c is a digit.", tuna);
    }
    else
        printf("%c is a alphanumeric.", tuna);
    return 0;
}

