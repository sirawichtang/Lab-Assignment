#include <stdio.h>

int main()
{
    int array[5];
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", (array + 1), (array + 2), (array + 3), (array + 4), (array + 5));
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (*(array + i + 1) < *(array + i))
            {
                int temp = *(array + i);
                *(array + i) = *(array + i + 1);
                *(array + i + 1) = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(array + i + 1));
    }
    printf("\n");
}