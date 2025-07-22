#include <stdio.h>

int main(){
    int A;
    
    printf("Enter a Number : ");
    scanf("%d", &A);
    
    switch(A <= 1){
        case 1:
            printf("Out of range\n");
            return 0;
    }
    switch(A >= 100){
        case 1:
            printf("Out of range\n");
            return 0;
    }

    switch(A %2){
        case 0:
            printf("Even\n");
            break;
        case 1:
            printf("Odd\n");
    }
    
    

    
    return 0;
}