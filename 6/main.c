#include <stdio.h>
#include <stdlib.h>

int main()
{

    float AvgProf;
    int daysworked = 7;
    int potsold = 80;
    int priceofpot = 5;
    float a = (float)potsold*(float)priceofpot/(float)daysworked;
    printf("Avg Profit= Rs. %f \n", a);




    return 0;
}
