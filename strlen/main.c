#include <stdio.h>
#include <stdlib.h>

int xstrlen(char *);
int main()
{
    char arr[] = "The crow flies straight.";
    printf("%d", xstrlen(arr));
    return 0;
}

int xstrlen (char *s)
{
    int length = 0;
    while (*s != '\0'){
        length++;
        s++;
    }
    return (length);
}
