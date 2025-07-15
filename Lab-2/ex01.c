#include <stdio.h>

int main(){
    int intval;
    float fltval;
    char chrval[2];

    printf("Please enter an integer value: ");
    scanf("%d", &intval);
    printf("you entered %d\n", intval);
    printf("Please enter a float value: ");
    scanf("%f", &fltval);
    printf("you entered %.2f\n", fltval);
    printf("Please enter a character: ");
    scanf("%s", chrval);
    printf("you entered %s\n", chrval);

    return(0);
}