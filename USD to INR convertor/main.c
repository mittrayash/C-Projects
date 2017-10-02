#include <stdio.h>
#include <stdlib.h>
void converttoinr(float usd);
int main()
{   float input;
    printf("How many usd?\n");
    scanf(" %f", &input);
    converttoinr(input);
    return 0;
}

void converttoinr(float usd){

float inr = (66.89) * usd;

printf(" %.2f usd = %.2f inr\n", usd, inr);

return;

}

