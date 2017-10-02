#include <stdio.h>
#include <stdlib.h>

int main()
{     int i, sorted;
     int howmany = 10;
     int numbers[howmany];
     int temp;
 printf("Original numbers\n");
     for (i=0; i<howmany; i++){
        numbers[i]  = (rand()%25)+1;

        printf("%d\n", numbers[i]);
     } printf("\n\nSorted numbers\n");
     while (1){
            sorted=0;
         for (i=0; i<howmany-1; i++){
                if (numbers[i]>numbers[i+1]){
                    temp=numbers[i];
                    numbers[i]=numbers[i+1];
                    numbers[i+1]=temp;
                    sorted=1;
                }
         }
                if (sorted == 0){
                break;}

         }for(i=0; i<howmany; i++){
             printf("%d\n", numbers[i]);}

    return 0;
}
