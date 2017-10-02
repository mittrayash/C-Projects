#include <stdio.h>
#include <stdlib.h>

int fib(int);
int main()
{
    int i,k;
    printf("Enter n: ");
    scanf("%d", &k);
    for(i=1; i<=k; i++){
        printf("%d\n", fib(i));

    }
return 0;
}
int fib(int n){

if (n==1)
    return 0;
else if (n==2)
    return 1;
else return (fib(n-1) + fib(n-2));

}

