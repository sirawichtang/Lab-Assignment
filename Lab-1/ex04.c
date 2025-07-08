#include <stdio.h>

int main(){
    float valueA = 23.5;
    float valueB = 23.5;
    float valueC = 6.4;
    float valueAnswer;

    valueAnswer = valueA + valueB + valueC;
    printf("%.2f + %.2f + %.2f = %.2f\n",valueA, valueB, valueC, valueAnswer);
}