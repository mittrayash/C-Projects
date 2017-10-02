#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, i, qwerty, temp;

    printf("Enter the length of array.\n");
    scanf(" %d", &length);

    int num[length];

    puts ("Enter array elements one by one.");
    for (i=0; i<length; i++){
    scanf(" %d", &num[i]);
}
    while (1){

    qwerty = 0;
    for (i=0; i<=length-1; i++){
       if (num[i]>num[i+1]){
        temp = num[i];
        num[i] = num[i+1];
        num[i+1] = temp;
        qwerty = 1;
       }

    }
    if (qwerty ==0){ break; }


    }

    puts ("The sorted numbers are:");
    for (i=0; i<=length-1; i++){
        printf("%d\n", num[i]);
    }



    return 0;
}
