#include <stdio.h>

int main(){

    int num, original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(num =0; num < 4; num++){
        int temp;
        temp = original[num];
        original[num] = original[8 - num];
        original[8 - num] = temp;
    }

    printf("Reversed array are : ");
    for (num = 0; num < 9; num++)
    {
        printf("%d ", original[num]);
    }
    printf("\n");

    return 0;
}