#include <stdio.h>

int main(){
    int i = 1, Num;
    do {
        printf("Enter a Number: ");
        scanf("%d", &Num);
        i++;
        if(Num %2 == 0 && Num != 0){
            printf("%d is Even\n", Num);
        }else if (Num != 0){
            printf("%d is odd\n", Num);
        }
    }
    while (Num != 0);
    printf("Exiting Program... Bye\n");
}