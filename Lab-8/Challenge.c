#include <stdio.h>
/*Declare Func*/
float averageGrade(int grade[], int studentcount);
int highestGrade(int grade[], int studentcount);
int lowestGrade(int grade[], int studentcount);
void passedStudent(int grade[], char name[][20], int studentcount);
/*Declare end*/

/*main*/
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
    printf("Average grade : %.2f\n", averageGrade(grade, studentCount));
    printf("Highest grade : %d\n", highestGrade(grade, studentCount));
    printf("Lowest grade : %d\n", lowestGrade(grade, studentCount));
    printf("\nStudents who passed:\n");
    passedStudent(grade, name, studentCount);
}
/*----------Func Bellow---------------*/
float averageGrade(int grade[], int studentcount)
{
    float sum = 0;
    for (int i = 0; i < studentcount; i++)
    {
        sum += grade[i];
    }
    return sum / studentcount;
}

int highestGrade(int grade[], int studentcount)
{
    int max = grade[0];
    for (int i = 1; i < studentcount; i++)
    {
        if (grade[i] > max)
        {
            max = grade[i];
        }
    }
    return max;
}

int lowestGrade(int grade[], int studentcount)
{
    int min = grade[0];
    for (int i = 1; i < studentcount; i++)
    {
        if (grade[i] < min)
        {
            min = grade[i];
        }
    }
    return min;
}

void passedStudent(int grade[], char name[][20], int studentcount)
{
    for (int i = 0; i < studentcount; i++)
    {
        if (grade[i] >= 60)
        {
            printf("%s\n", name[i]);
        }
    }
}