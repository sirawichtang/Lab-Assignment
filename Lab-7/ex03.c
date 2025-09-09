#include <stdio.h>

int main()
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int i, max = 0;

    for (i = 0; i < 6; i++)
    {
        if (*(array+i) > max)
        {
            max = *(array+i);
        }
    }
    printf("Max value: %d\n", max);
    return 0;
}