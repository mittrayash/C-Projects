#include <stdio.h>
#include <stdlib.h>

int main()
{

   char Girlfriend[20];
   int Uni;
   int passingyear;

   printf("What is your girl's name? \n");
   scanf("%s", Girlfriend);
   printf("When will you get married? \n");
   scanf("%d", &Uni);
   printf("How many babies do you want? \n");
   scanf("%d", &passingyear);

   printf("Yash Mittra and %s are gonna marry each other in the year %d and are gonna make %d babies!", Girlfriend, Uni, passingyear);

    return 0;
}
