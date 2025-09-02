#include <stdio.h>

int main()
{
    struct TimeStruc
    {
        int min;
        int sec;
    } time[2];

    for (int i = 0; i < 3; i++)
    {
        printf("Time input (m:s): ");
        scanf("%d:%d", &time[i].min, &time[i].sec);
    }
    int totalTime;
    for (int i = 0; i < 3; i++)
    {

        totalTime += (time[i].min * 60) + time[i].sec;
    }
    printf("Total time elasped: %d second(s)\n", totalTime);
    return 0;
}