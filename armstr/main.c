#include <stdio.h>
int main( )
{
int no, temp, rem, sum;

printf("Armstrong numbers between 1 and 1000 are:\n");
for(no=1; no<=1000; no++)
{
temp=no;
sum=0;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}
if(no==sum)
printf("\n%d", no);
}
getch( );
return 0;
}
