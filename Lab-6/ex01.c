#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    struct profile
    {
        char name[100];
        int age;
        float score;
    } Id[10];

    for (i = 1; i <= 3; i++)
    {
        printf("Student %d's name = ", i);
        scanf("%s", Id[i].name);
        printf("Student %d's age = ", i);
        scanf("%d", &Id[i].age);
        printf("Student %d's score = ", i);
        scanf("%f", &Id[i].score);
    }
    printf("\n");
    for (i = 1; i <= 3; i++)
    {
        printf("student %d's name is '%s', age %d years old, scored %.1f points.\n", i, Id[i].name, Id[i].age, Id[i].score);
    }
    return 0;
}