#include <stdio.h>

int main(){
    char name[40];
    int studentID;
    float ProgScore;
    float PhyScore;
    float CalScore;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &studentID);
    printf("Enter your Programming score: ");
    scanf("%f", &ProgScore);
    printf("Enter your Physics score: ");
    scanf("%f", &PhyScore);
    printf("Enter your Calculus score: ");
    scanf("%f", &CalScore);
    printf("Hi %s(%d)! Your GPA is %.2f",name ,studentID ,(ProgScore + PhyScore + CalScore) / 3);


    return(0);
}