#include <stdio.h>

int main(){
    int Num1;
    int Num2;

    printf("Enter a Number : ");
    scanf("%d", &Num1);
    printf("Enter a Second Number : ");
    scanf("%d", &Num2);

    if(Num1 == Num2){
        printf("Match");
    }else{
        printf("Do not match, try again");
    }
    printf("\n");
    
    return 0;
}