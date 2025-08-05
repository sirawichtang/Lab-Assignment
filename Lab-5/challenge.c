#include <stdio.h>

int main(){
    printf("Number of element : ");
    int arraySize;
    scanf("%d", &arraySize);
    int num, subnum, numArray[arraySize];
    int isDuplicate; //bool is duplicate
    for (num = 0; num < arraySize; num++)
    {
        printf("Value %d : ", num + 1);
        scanf("%d", &numArray[num]);
    }

    for (num = 0; num < arraySize; num++)
    {
        for(subnum =0; subnum < num; subnum++){
            if(numArray[num] == numArray[subnum]){
                //if true then dont care
                isDuplicate = 1;
                break;
            }else{
                isDuplicate = 0;
            }
        }
        int dupeCount;
        if(isDuplicate ==0){
            dupeCount = 0;
            for(subnum = num + 1; subnum < arraySize; subnum++){
                if(numArray[num] == numArray[subnum]){
                    dupeCount++;
                }
            }
            printf("Element %d appears %d times \n", numArray[num], dupeCount + 1);
        }
    }

    return 0;
}