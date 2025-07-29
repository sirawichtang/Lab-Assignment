#include <stdio.h>

int main(){
    int i, faCount, Ans = 1;

    printf("Enter a Number : ");
    scanf("%d", &faCount);    
    for(i = 1; i <= faCount; i++){
        Ans *= i;
    }
    printf("Factorial of %d is %d\n",faCount, Ans);
}