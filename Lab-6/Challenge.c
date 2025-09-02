#include <stdio.h>

int main()
{
    int i = 0;

    struct StudentInfo
    {
        char name[20];
        int id;
        int score1;
        int score2;
        int score3;
        int score4;
    } Student[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and 4 grades for student %d: \n", i + 1);
        scanf("%s %d %d %d %d %d", Student[i].name, &Student[i].id, &Student[i].score1, &Student[i].score2, &Student[i].score3, &Student[i].score4);
    }
    // average
    printf("\nStudent's average: \n");
    float topScore = 0;
    int topStudent;
    for (i = 0; i < 3; i++)
    {
        float result;
        result = (Student[i].score1 + Student[i].score2 + Student[i].score3 + Student[i].score4) / 4.00;
        printf("%s (ID: %d): %.2f\n", Student[i].name, Student[i].id, result);
        if (result > topScore)
        {
            topScore = result;
            topStudent = i;
        }
    }
    printf("\nTop Student: %s with %.2f\n", Student[topStudent].name, topScore);
    printf("\nSubject Average:\n");
    float scoreAvg[4];
    printf("Math: %.2f\n", scoreAvg[0] = (Student[1].score1 + Student[2].score1 + Student[0].score1) / 3.00);
    printf("English: %.2f\n", scoreAvg[1] = (Student[1].score2 + Student[2].score2 + Student[0].score2) / 3.00);
    printf("Science: %.2f\n", scoreAvg[2] = (Student[1].score3 + Student[2].score3 + Student[0].score3) / 3.00);
    printf("History: %.2f\n", scoreAvg[3] = (Student[1].score4 + Student[2].score4 + Student[0].score4) / 3.00);

    printf("Top subject: ");
    int BestSubject;
    float BestSubjectScore = 0;
    for (i = 0; i < 4; i++)
    {
        if (scoreAvg[i] > BestSubjectScore)
        {
            BestSubjectScore = scoreAvg[i];
            BestSubject = i;
        }
    }
    switch (BestSubject)
    {
    case 0:
        printf("Math with average %.2f", BestSubjectScore);
        break;

    case 1:
        printf("English with average %.2f", BestSubjectScore);
        break;

    case 2:
        printf("Science with average %.2f", BestSubjectScore);
        break;

    case 3:
        printf("History with average %.2f", BestSubjectScore);
        break;
    default:
        printf("its bugged");
        break;
    }
    return 0;
}