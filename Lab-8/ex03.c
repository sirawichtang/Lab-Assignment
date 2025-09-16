#include <stdio.h>
int a, b;
int getSum(int a, int b);

int main()
{
    printf("Enter the two interger: ");
    scanf("%d %d", &a, &b);
    printf("Sum of squares of %d and %d is %d\n", a, b, getSum(a, b));
    return 0;
}

int getSum(int a, int b)
{
    return (a * a) + (b * b);
}