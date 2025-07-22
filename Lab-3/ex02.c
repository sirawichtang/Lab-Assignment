#include <stdio.h>

int main(){
    int A;
    
    printf("Enter a Number : ");
    scanf("%d", &A);

    if(A > 1 && A < 100){
        if(A % 2 == 0){//remainder == 0 or not
            printf("%d is even\n", A);
        }else{
            printf("%d is odd\n", A);
        }

    }else{
        printf("%d is out of range\n", A);
    }
    
    return 0;
}