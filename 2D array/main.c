#include <stdio.h>
#include <stdlib.h>
int minumum (int *);
int main()
{
    int arr[19] = {18,4,6,32,7,4,6,2,5,9,3,21,2,2,69,54,13,573,23};

    int *first = &arr[0];
    printf("%d", minimum(first));
    return 0;
}

int minimum (int *a) {
    int min, i;
min = *a;

  for (i=1; i<=18; i++, a++){
    if (min > *a){
        min = *a;
    }
  }
return (min);

}
