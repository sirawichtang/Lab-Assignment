#include <stdio.h>

int main()
{
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int *aPtr = &a;
    int *bPtr = &b;
    int *temp;

    temp = aPtr;
    aPtr = bPtr;
    bPtr = temp;
    printf("After reverse: a = %d, b = %d\n", *aPtr, *bPtr);
    return 0;
}