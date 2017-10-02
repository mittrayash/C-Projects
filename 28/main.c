
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int meatballs[5];
    int totalballs = 0;

    for(i=0; i<5; i++){
        printf("How many meatballs did you eat on day %d?\n",i+1);
        scanf("%d", &meatballs[i]);    }

        for(i=0; i<5; i++){
        totalballs += meatballs[1];
        }

        int avg = totalballs/5;
        printf("\nYou eat %d meatballs total, thats an average of %d per day!\n", totalballs, avg);



    return 0;
}
