#include <stdio.h>
#include <stdlib.h>
int Length(char *);
int main()
{
    char str[100];
    puts("Enter a string");
    gets(str);
    printf("Length = %d\n", Length(str));
    return 0;
}

int Length (char *a){

int count = 0;

while (*a != '\0'){
    count ++;
    a++;
}
return (count);
}
