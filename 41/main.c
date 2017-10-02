#include <stdio.h>
#include <stdlib.h>
void converttoinr(float usd);
void converttousd (float inr);
int main()
{   int ans;
    float input1, input2;
    printf("Pick conversion parameters.\n1. USD to INR\n2. INR to USD\n");
    scanf(" %d", &ans);
    if (ans = '1'){
    printf("How many usd?\n");
    scanf(" %f", &input1);
        converttoinr(input1);
    }
    else if (ans = '2'){
        printf("How many inr?\n");
        scanf(" %f", &input2);
        converttousd (input2);

    }
else {
        printf("Invalid input.");
    }


    return 0;
}

void converttoinr(float usd){

float inr = (66.89) * usd;

printf(" %.2f usd = %.2f inr\n", usd, inr);

return;

}

void converttousd (float inr){
float usd = (1/66.89) * inr;
printf("%.2f inr = %.2f usd\n", inr, usd);

return;
}
