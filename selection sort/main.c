#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2,4,6,8,4,23,73,12,7,12,6,5235,76,34,2,4456,4334,2,3,6,76,4}, i, j;
   int selected = arr[0];
  printf("Original array: \n");
  for(i=0; i<22; i++){
    printf("%d\n", arr[i]);
  }
     for(i=0; i<22; i++){
            selected = arr[i];
        for (j=i; j<22; j++){
            if (selected > arr[j] ){

                arr[i] = arr[j];
                arr[j] = selected;
            selected = arr[i];
            }
        }
     }

   printf("Sorted array: \n");
   for(i=0; i<22; i++){
    printf("%d\n", arr[i]);
  }
   return 0;
}
