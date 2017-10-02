#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("Bacon.txt", "a");

    fprintf(fpointer, "\nYash Mittra");

    fclose(fpointer);

    return 0;
}
