#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("New Text Document.txt", "r");

    char read[150];

    while(!feof(fPointer)){
        fgets(read, 150, fPointer);
        puts(read);
    }

    return 0;
}
