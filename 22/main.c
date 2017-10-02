#include <stdio.h>
#include <stdlib.h>

int main()
{
   char fish[100]= "I am ";
   strcat (fish, "Yash ");
   strcat (fish, "Mittra ");
   printf(" %s \n", fish);

strcpy (fish, "Sure!");
printf(" %s", fish);
    return 0;
}
