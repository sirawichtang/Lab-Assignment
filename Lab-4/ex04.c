#include <stdio.h>

int main(){
    int i, Num;
    printf("Enter a Number : ");
    scanf("%d", &Num);
    printf("Multiplication table for %d :\n", Num);
    for(i = 1; i <= 12; i++){
        printf("%d * %d = %d\n", Num, i, Num * i);
    }
}