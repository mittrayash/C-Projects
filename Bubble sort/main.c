#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {4,12,1,12,56,32,121,4355,65,34};
    int i, j, temp;
    for (i=0; i<10; i++){
        for (j=0; j<10-i; j++){
        if (arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
    printf("Sorted numbers: \n");
    for (i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}


