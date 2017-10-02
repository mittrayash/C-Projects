#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    int Total=0;
    int Meatballs[5];
    float avg;
for (i=0; i<5; i++){
    printf("Enter the number of meatballs eaten on day %d. \n", i+1);
    scanf(" %d", &Meatballs[i]);
    Total+= Meatballs[i];
}   avg = (float)Total/5 ;
    printf("The total number of meatballs you ate are: %d\n The avg meatballs per day are: %.2f", Total, avg);

    return 0;
}
