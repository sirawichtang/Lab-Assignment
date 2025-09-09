#include <stdio.h>

int main()
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int i, sum = 0;
    int size = 6;

    for (i = 0; i < size; i++)
    {
        sum += *(array+i);
    }
    printf("The sum of array is: %d\n", sum);
    return 0;
}