#include <stdio.h>
#include <stdlib.h>

int main()
{     char movie[20];
    char *pmovie=movie;
    puts("Enter movie name");
    fgets(pmovie, 20, stdin);
    puts(pmovie);
    puts(*pmovie);



    return 0;
}
