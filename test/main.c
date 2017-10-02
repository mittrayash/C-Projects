#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "Get organised! Learn C!";
    printf("%s\n", &s[2]);
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);



    return 0;
}
