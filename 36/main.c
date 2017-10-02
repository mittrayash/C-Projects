#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fPointer;
    fPointer = fopen("Burning.txt", "w");
    fprintf(fPointer, "I'm leaving you.");
    fclose(fPointer);

    return 0;
}



