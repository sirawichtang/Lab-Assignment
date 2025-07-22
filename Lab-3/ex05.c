#include <stdio.h>

int main(){
    int Height;
    int baseRad;
    float coneVolume;

    float pi = 3.14;
    
    printf("Enter cone height : ");
    scanf("%d", &Height);
    printf("Enter cone base's radius : ");
    scanf("%d", &baseRad);

    coneVolume = 0.3333 * pi * (baseRad * baseRad * baseRad) * Height;

    printf("Cone's volume = %.2f\n", coneVolume);

    if(coneVolume > 260){
        printf("This cone is perfect for supun's project\n");
    }else{
        printf("This cone is not fit for this project\n");
    }
    return 0;
}