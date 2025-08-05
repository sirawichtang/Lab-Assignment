#include <stdio.h>

int main(){
    int highest, lowest, num, numArray[8];
    for (num = 0; num < 8; num++)
    {
        printf("Value %d : ", num + 1);
        scanf("%d", &numArray[num]);
    }

    for (num = 0; num < 8; num++)
    {
        if (numArray[num] > highest) highest = numArray[num];
    }
    lowest = highest;
    for (num = 0; num < 8; num++)
    {
        if (numArray[num] < lowest) lowest = numArray[num];
    }
    printf("Highest value : %d\n", highest);
    printf("Lowest value : %d\n", lowest);

    return 0;
}