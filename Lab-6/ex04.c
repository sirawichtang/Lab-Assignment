#include <stdio.h>

int main()
{
    struct cordenates
    {
        float x;
        float y;
    } set[2];

    printf("u_x :");
    scanf("%f", &set[0].x);
    printf("u_y :");
    scanf("%f", &set[0].y);
    printf("v_x :");
    scanf("%f", &set[1].x);
    printf("v_y :");
    scanf("%f", &set[1].y);

    printf("resultant vector is %.1fi + %.1fj\n", set[0].x + set[1].x, set[0].y + set[1].y);
}