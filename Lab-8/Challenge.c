#include <stdio.h>

int averageGrade(int grade[], int count);
int highestGrade(int grade[], int count);
int lowestGrade(int grade[], int count);

int main()
{
    int studentCount;
    printf("Enter number of students: ");
    scanf("%d", &studentCount);

    char name[studentCount][20];
    int grade[studentCount];

    for (int i = 0; i < studentCount; i++)
    {
        printf("enter name of student %d : ", i + 1);
        scanf("%s", name[i]);
        printf("enter grade of %s : ", name[i]);
        scanf("%d", &grade[i]);
        printf("\n");
    }

    printf("-----Results-----\n");
    printf("Average grade : %d\n", averageGrade(grade, studentCount));
    printf("Highest grade : %d\n", highestGrade(grade, studentCount));
    printf("Lowest grade : %d\n", lowestGrade(grade, studentCount));
}

int averageGrade(int grade[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += grade[i];
    return count ? sum / count : 0;
}

int highestGrade(int grade[], int count)
{
    int max = grade[0];
    for (int i = 1; i < count; i++)
        if (grade[i] > max)
            max = grade[i];
    return max;
}

int lowestGrade(int grade[], int count)
{
    int min = grade[0];
    for (int i = 1; i < count; i++)
        if (grade[i] < min)
            min = grade[i];
    return min;
}