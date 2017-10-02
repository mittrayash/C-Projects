#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, howmany;
    int *pointsArray;//in method 2 you can remove the pointer sign (*) but you need to add the array size to [howmany]
    int total=0;
    float avg;

    puts("How many numbers do you want to find the average of?");
    scanf(" %d", &howmany);

    pointsArray = (int *)malloc(howmany*(sizeof(int)));
//in method 2 you remove the line above

    for (i=0; i<howmany; i++){
    printf("Enter number %d\n", i+1);
    scanf(" %d", &pointsArray[i]);
    total+= pointsArray[i];
    }
    avg = (float)total/(float)howmany;
    printf("The average of the numbers is: %f", avg);

    return 0;
}
