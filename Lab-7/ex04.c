#include <stdio.h>

int main()
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int i;
    int size = 6;

    for (i = 0; i < size; i++)
    {
        printf("%d\n", *(array + i));
    }
    return 0;
}