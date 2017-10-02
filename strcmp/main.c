#include <stdio.h>
#include <stdlib.h>

int main()
{
    char guest[] = "yash";
    char invited[10];

    puts("Type whom to invite!");
    gets(invited);

   int a = strcmp(&invited,guest);

    printf("%d", a);

    return 0;
}
