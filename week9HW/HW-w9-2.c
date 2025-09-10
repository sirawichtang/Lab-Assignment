#include <stdio.h>

int main()
{

    float x, y, temp;
    float *xPtr = &x;
    float *yPtr = &y;

    x = 25.0f;
    y = 15.0f;

    printf("Value before swap, X = %.2f, Y = %.2f\n", *xPtr, *yPtr);

    temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;

    printf("Value before swap, X = %.2f, Y = %.2f\n", *xPtr, *yPtr);
    return 0;
}