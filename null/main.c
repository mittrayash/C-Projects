#include <stdio.h>
#include <stdlib.h>

int main()
{   int i = 0;
    char str[] = ("King's landing");
    do ((printf("%c", str[i])) && (i++));
    while (str[i] != '\0');


    return 0;
}
