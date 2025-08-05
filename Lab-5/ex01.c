#include <stdio.h>

int main()
{

    int num, numArray[10];
    for (num = 0; num < 10; num++)
    {
        printf("Value %d : ", num + 1);
        scanf("%d", &numArray[num]);
    }
    printf("Array value are : ");
    for (num = 0; num < 10; num++)
    {
        printf("%d\t", numArray[num]);
    }
    printf("\n");
    return 0;
}