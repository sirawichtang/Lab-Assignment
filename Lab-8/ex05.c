#include <stdio.h>

int arrayNum[5];
int oddSum(int arrayNum[]);
int evenSum(int arrayNum[]);

int main()
{
    printf("Input : ");
    scanf("%d %d %d %d %d", &arrayNum[0], &arrayNum[1], &arrayNum[2], &arrayNum[3], &arrayNum[4]);
    printf("sum of even: %d\n", evenSum(arrayNum));
    printf("sum of odd: %d\n", oddSum(arrayNum));
    return 0;
}

int oddSum(int arrayNum[]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        if(arrayNum[i]%2 == 1){
            sum+=arrayNum[i];
        }
    }

    return sum;
}

int evenSum(int arrayNum[]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        if(arrayNum[i]%2 == 0){
            sum+=arrayNum[i];
        }
    }

    return sum;
}