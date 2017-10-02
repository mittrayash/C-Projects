#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int player[5]= {10, 20, 30, 40, 50};
    int goals[5]= {30, 21, 43, 26, 41};
    int games[5]= {30,29,29,30,27};
    float ppg[5];
    float bestppg=0.0;
    int bestplayer;

    for (i=0; i<=4; i++){
            ppg[i] = (float)goals[i]/(float)games[i];
        printf("\n Player: %d \tGoals: %d \t Games: %d \t PPG: %.2f\n", player[i], goals[i], games[i], ppg[i]);
if (ppg[i]>bestppg);
    bestppg = ppg[i];
    bestplayer = player[i];
    } printf("\n\nThe best player is: %d\n", player[i]);

    return 0;
}
