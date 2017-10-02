#include <stdio.h>
#include <stdlib.h>

void main()
{
int a = 54321, b, c, d, e, f, g, h, i, x ;

 b = a % 10000 ;
 c = (a-b)/10000 ;//b = 4321, c = 5

 d = (a-c*10000)%1000 ;//d = 321, e = 4
 e = (b-d)/1000 ;

 f = (a-c*10000-e*1000)%100 ;//f = 21, g = 3
 g = (d-f)/100 ;

 h = (a-c*10000-e*1000-g*100)%10 ;//h = 1
 i = (f-h)/10 ;

 x = c+e+g+i+h ;
 printf("%d", x) ;
    return ;
}
