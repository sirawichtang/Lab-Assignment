#include <stdio.h>

int main(){
    int even, odd, num, numArray[10];
    for (num = 0; num < 10; num++)
    {
        printf("value %d : ", num + 1);
        scanf("%d", &numArray[num]);
    }

    for (num = 0; num < 10; num++)
    {
        if(numArray[num] %2 == 0) even++;
        else odd++;
    }
    printf("Even number : %d\n", even);
    printf("Odd number : %d\n", odd);

    return 0;
}