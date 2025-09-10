#include <stdio.h>
int main()
{
    struct S
    {
        int value;
    } sData[3];
    int i;
    struct S *sPtr;
    sPtr = sData;
    printf("Insert the first value : ");
    scanf("%d", &sPtr->value);
    sPtr++;
    printf("Insert the second value : ");
    scanf("%d", &sPtr->value);
    sPtr++;
    sPtr->value = (sPtr - 2)->value + (sPtr - 1)->value;
    printf("Third sum of all value is : %d\n", sPtr->value);

    return 0;
}