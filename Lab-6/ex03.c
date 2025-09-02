#include <stdio.h>
#include <math.h>

int main()
{
    struct Cordenates
    {
        double x;
        double y;
    } set[2];

    for (int i = 0; i < 2; i++)
    {
        printf("x%d : ", i+1);
        scanf("%lf", &set[i].x);
        printf("y%d : ", i+1);
        scanf("%lf", &set[i].y);
    }

    double result = sqrt((set[1].x - set[0].x) * (set[1].x - set[0].x) + (set[1].y - set[0].y) * (set[1].y - set[0].y));
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f\n", set[0].x, set[0].y, set[1].x, set[1].y, result);

    return 0;
}