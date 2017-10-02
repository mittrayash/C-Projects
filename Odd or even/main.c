#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, half;
    float fhalf;
    puts("Enter the number");
    scanf(" %d", &number);
   half = number/2;  fhalf= (float)number/2;
   if (half== fhalf){
    puts("Number is even!");
    }
    else if (half < fhalf){
        puts("Number is odd!");
    }


    return 0;
}
