#include <stdio.h>
#include <stdlib.h>

int main()

{
    float grade1, grade2, grade3;
    printf("Enter your grades. \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    float avg = (grade1+grade2+grade3)/3;

    if (avg>=90){
            printf("grade = A");


    }else if (80<=avg<90){
    printf("grade = B");

    }
    else if (70<=avg<80){
    printf("grade = C");
    }
    else if (60<=avg<70){
        printf("Grade = D");

    }
    else if (avg<60){
        printf("Grade = E");

    }


    return 0;
}
