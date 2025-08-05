#include <stdio.h>

int main()
{

    int highest, total, num, numArray[5];
    for (num = 0; num < 5; num++)
    {
        printf("Enter mark of student %d : ", num + 1);
        scanf("%d", &numArray[num]);
    }

    for (num = 0; num < 5; num++)
    {
        total += numArray[num];
        if (numArray[num] > highest) highest = numArray[num];
    }
    printf("Total Marks : %d\n", total);
    printf("Highest Marks : %d\n", highest);

    return 0;
}