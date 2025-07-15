#include <stdio.h>

int main(){
    char name[40];
    int age;
    float height;
    char UniName[40];
    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your university name: ");
    scanf("%s", UniName);
    
    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall\n",name ,UniName ,age ,height);

    return(0);
}