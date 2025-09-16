#include <stdio.h>

int isPrime(int start, int end);
int main()
{
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    isPrime(start, end);
    printf("\n");
    return 0;
}

int isPrime(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int primeCond = 1; // just a bool
        if (i < 2)
        {
            primeCond = 0;
        }
        else
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    primeCond = 0;
                    break;
                }
            }
        }

        if (primeCond)
        {
            printf("%d\t", i);
        }
    }
}