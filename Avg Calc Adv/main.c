#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numberOfTests = 1;
    float average = 0;
    float score = 0;
    float grade= 0;
    printf("Enter 0 to stop \n\n");
    do {
            printf("Enter Score: ");
    scanf("%f", &score);
    grade += score;
    average = grade/numberOfTests;
        printf("Number of tests = %.0f \t avg score = %f\n\n", numberOfTests, average);
numberOfTests++;
    }while( score !=0);


    return 0;
}
