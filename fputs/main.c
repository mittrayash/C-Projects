#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char s[80];

    fp = fopen("Apples.txt", "w");

    while (strlen(gets(s)) > 0){
        fputs(s , fp);
        fputs("\n", fp);
    }

    fclose(fp);



    return 0;
}
