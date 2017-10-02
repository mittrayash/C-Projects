#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 54321  ;
    int i, z, b ;
    int c[5] ;


    for( i = 0 ; i <= 4 ; i++){
     b = a % (int)pow(10,(4 - i)) ;
     c[i]  = (a - b) / (int)pow(10,(4 - i)) ;
    }

    for ( z = 0 ; z < 5 ; z++ )
        printf("%d\n", c[z]) ;


    return 0;
}
