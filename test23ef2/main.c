#include <stdio.h>

int main()
{
int arr[14] = {1,5,23,6,23,6,23,0,57,3,76,34,546,34};

int i, j, k, n, num;

for(i=0; i<=13; i++){

    for(j=i+1; j<=13; j++){
        if(arr[i]>arr[j]){
            num = arr[i];
            arr[i] = arr[j];
            arr[j] = num;
        }
    }
}
for(i=0; i<=13; i++)
printf("%d\n", arr[i]);

   return 0;
}

