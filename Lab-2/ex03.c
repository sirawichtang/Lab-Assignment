#include <stdio.h>

int main(){
    char name[40];
    int age;
    float height;
    int weight;
    char gender[2];
    char qualification[40];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%d", &weight);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your qualification: ");
    scanf("%s", qualification);

    printf("Name: %-10sAge: %-10dGender: %s\nHeight: %-8.1fWeight: %d\nEducation: %s\n",name ,age ,gender, height, weight, qualification);


    return(0);
}