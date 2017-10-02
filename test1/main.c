#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str1[30] = {"United"};
    char *str2[30] = {"Front"};

    strcat(str1,str2);
    printf("%s\n", *str1);


    return 0;
}
