#include <stdio.h>

char givenText[30];
int vowelCount(char givenText[]);

int main()
{
    printf("Input : ");
    scanf("%[^\n]", givenText); //%[^\n] for char that include a space
    printf("%d\n", vowelCount(givenText));
    return 0;
}

int vowelCount(char givenText[])
{
    int j = 0;
    for (int i = 0; givenText[i] != '\0'; i++)
    {
        if (givenText[i] == 'a' || givenText[i] == 'e' || givenText[i] == 'i' || givenText[i] == 'o' || givenText[i] == 'u' ||
            givenText[i] == 'A' || givenText[i] == 'E' || givenText[i] == 'I' || givenText[i] == 'O' || givenText[i] == 'U')
        {
            j++;
        }
    }

    return j;
}