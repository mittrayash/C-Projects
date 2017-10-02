#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int a=0;
    int b=0;
    int dice1;
    int dice2;
    char guess;
    printf("Three dies. First roll. The following numbers appear!\n");
    for (i=1; i<=3; i++){
      dice1 = ( rand()%6 )+1;
        printf ("%d\n", dice1);
        a+=dice1;
    } printf("The sum of the rolled digits is = %d\n", a);
     printf("\nNow, make your guess!\n\n On the next roll? If you expect the sum to be Greater(g), Lower(l) or the same(s)?\n");

     scanf(" %c", &guess);
     printf("\n\nThree dies. Final roll. The following numbers appear!\n");
    for (i=1; i<=3; i++){
      dice2 = ( rand()%6 )+1;
        printf ("%d\n", dice2);
        b+=dice2;
    } printf("The sum of the rolled digits is = %d\n", b);

     if  (guess=='g'){
            if (b>a){
        printf("\nCongratulations, you win!\n\n");}
     else { printf("\nBetter luck next time!\n");
     }}
     if  (guess=='l'){
            if (b<a){
        printf("\nCongratulations, you win!\n\n");}
     else {printf("\nBetter luck next time!\n");
     }}
     if (guess=='s'){
        if (b==a){
            printf("\nCongratulations, you win!\n\n");
        }else if (b!=a){
        printf("\n\nBetter luck next time!\n\n");
     }}


return 0;

}
