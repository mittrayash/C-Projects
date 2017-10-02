#include <stdio.h>
#include <stdlib.h>
//Counting Lower, upper and special case characters.
int main()
{
    int upper = 0, lower = 0, special = 0;
    FILE *fp;
    char ch;

    fp = fopen("Apples.txt", "r");

    while(1){
        ch = fgetc(fp);
        if (ch == EOF){
            break;
        }
        if (islower(ch) != 0)
            lower++;
        else if (isupper(ch) != 0)
            upper++;
        else if (ch == ' '){}

        else if (isdigit(ch) != 0){}
        else if (ch == '\n'){}
        else special ++;

    }
printf("Lower case = %d\nUpper Case = %d\nSpecial Characters = %d\n", lower, upper, special);
    return 0;
}
