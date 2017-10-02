#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("Bacon.txt", "w+");
    fputs("I like apples.", fpointer);

    fseek(fpointer, 7, SEEK_SET);
    fputs("Oranges", fpointer);
    fclose(fpointer);


    return 0;
}
