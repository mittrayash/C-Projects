#include <stdio.h>
#include <stdlib.h>
void swapv (int *, int *);
int main()
{
    int a, b;
    puts("Enter a and b");
    scanf("%d%d", &a, &b);
    swapv (&a,&b);

    printf("a = %d, b=%d", a,b);

    return 0;
}

void swapv(int *x, int *y){

int t;
t = *x;
*x = *y;
*y = t;

}
