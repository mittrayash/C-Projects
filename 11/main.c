#include <stdio.h>
#include <stdlib.h>

int main()
{

    char answer;
   printf("Type in your answer. \n");
   scanf(" %c", &answer);

   if ( (answer=='y') && (5<1)) {
    printf("Okay!");
   }
   else {
    printf("Try again!");
   }


    return 0;
}
