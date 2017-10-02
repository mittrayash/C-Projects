#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, dig, num;
    for (i=1; i<=500; i++){
            num = i;
           int sum = 0;
      while (i>0){
        dig = i%10;
        i = i/10;
        sum = sum + dig*dig*dig;
      }
      i = num;
      if (sum == num){
        printf("%d is an Armstrong number.\n", sum);
      }
      }

    return 0;
}
