#include <stdio.h>
#include <stdlib.h>

int main()
{
    char catname[100];
    char catfood[74];
    char sentense[122]="";

    puts("What's the cat's name?");
    gets(catname);

puts ("What does the cat eat?");
gets (catfood);
    strcat(sentense, catname );
    strcat(sentense, " eats " );
    strcat (sentense, catfood);
puts (sentense);

    return 0;
}
