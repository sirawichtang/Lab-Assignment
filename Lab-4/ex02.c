#include <stdio.h>

int main(){
    int i = 1, sum = 0, sumTemp = 0;
    while(i <= 10){
        printf("%d. Enter a Number: ", i);
        scanf("%d", &sumTemp);
        i++;
        sum += sumTemp;
        sumTemp = 0;
    }
    printf("\nTotal sum is %d\n", sum);
}