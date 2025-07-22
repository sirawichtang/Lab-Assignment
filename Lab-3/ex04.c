#include <stdio.h>

int main(){
    char Name[30];
    float scoreCal;
    float scorePhy;
    float scoreSci;
    float scoreAvg;
    
    printf("Enter your name : ");
    scanf("%s",Name);
    printf("Enter your Calculus score : ");
    scanf("%f",&scoreCal);
    printf("Enter your Physics score : ");
    scanf("%f",&scorePhy);
    printf("Enter your Science score : ");
    scanf("%f",&scoreSci);

    scoreAvg = (scoreCal + scorePhy + scoreSci) / 3;
    
    if(scoreAvg >= 80){
        printf("%s, Your average score is %.2f. Your grade is A", Name, scoreAvg);
    }else if (scoreAvg >= 70){
        printf("%s, Your average score is %.2f. Your grade is B", Name, scoreAvg);
    }else if (scoreAvg >= 60){
        printf("%s, Your average score is %.2f. Your grade is C", Name, scoreAvg);
    }else if (scoreAvg >= 50){
        printf("%s, Your average score is %.2f. Your grade is D", Name, scoreAvg);
    }else{
        printf("%s, Your average score is %.2f. Your grade is F", Name, scoreAvg);
    }

    printf("\n");
    return 0;
}