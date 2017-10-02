#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
   printf("Input your grade. (In Capitals) ");
   scanf(" %s", &grade);
   switch (grade) {
        case 'A' : printf("Very well done!\n");
        break;
        case 'B' : printf("Nice!\n");
        break;
        case 'C' : printf("Could have done better!\n");
        break;
        case 'D' : printf("You love the D, don't you?\n");
        break;
        case 'F' : printf("Loser!\n");
        break;
        default: printf("That doesn't make sense!\n");
   }

    return 0;
}
