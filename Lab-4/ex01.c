#include <stdio.h>

int main(){
    int i, sum = 0, sumTemp = 0;
    for(i = 1; i <= 10; i++){
        printf("%d. Enter a Number: ", i);
        scanf("%d", &sumTemp);
        sum += sumTemp;
        sumTemp = 0;
    }
    printf("Total sum is %d\n", sum);
    printf("Average is  %d\n", sum / i+1);
}