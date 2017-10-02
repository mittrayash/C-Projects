#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "I like books";
    char str2[] = " and beats.";

    printf("Length of string 1 = %d\n", strlen(str1));
    printf("Lower casing: %s\n", strlwr(str1));
    printf("Concatenation : %s\n", strcat(str1, str2));
    printf("Comparison: %d\n", strncmp(str1, str2));
    printf("Reverse: %s\n", strrev(str1));
    printf("%d", strchr(str1, 'l'));


    return 0;
}
