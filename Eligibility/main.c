#include <stdio.h>
#include <stdlib.h>

int main()
{
    char guestlist[6][10] = {"yash", "jatin", "max", "patrick", "donna", "bart"};

    int i, flag, a;
    char yourname[10];

    printf("Enter your name: ");
    scanf("%s", yourname);

    flag = 0;

    for(i=0; i<6; i++){
        a = strcmp(&guestlist[i][0], yourname);
        if (a == 0){
            flag = 1;
            printf("Welcome %s!", guestlist[i]);
            break;
        }
    }

    if (flag == 0){
        printf("Bugger off!");
    }
     int p = strlen(guestlist);
     printf("%d", p);

    return 0;
}
