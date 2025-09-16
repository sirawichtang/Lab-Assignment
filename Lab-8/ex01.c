#include <stdio.h>
float radius;
float getArea(float radius);
float getCircumf(float radius);
#define pi 3.14

int main()
{
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);
    printf("Circumference: %.2f\n", getCircumf(radius));
    printf("Area: %.2f\n", getArea(radius));
    return 0;
}

float getArea(float radius)
{
    float area = pi * radius * radius;
    return area;
}

float getCircumf(float radius)
{
    float Circumf = pi * radius * 2;
    return Circumf;
}