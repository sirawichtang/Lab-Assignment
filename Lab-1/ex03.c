#include <stdio.h>

int main(){
    int valueA = 57;
    int valueB = 83;
    int valueC = 17;
    int valueAnswer;
    
    valueAnswer = (valueA + valueB) - valueC;
    printf("(%d + %d) - %d = %d\n",valueA, valueB, valueC, valueAnswer);
}