#include <stdio.h> 

int main() {

    float radius;
    float height;
    float validNum;
    const float PI = 3.14159;
    

    printf("Enter Radius: ");
    validNum = scanf("%f", &radius);

    if(validNum != 1) {
        printf("INVALID INPUT!C");
        return 0;
    }

    printf("Enter Height: ");
    scanf("%f", &height);

    float Vformula = (PI * radius * radius * height);
    float SAFormula = (2 * PI * radius) * (radius + height);

    
    if(height > 0 || radius > 0) {
        printf("\nVolume: %.2f", Vformula);
        printf("\nSurface Area: %.2f", SAFormula);
    }

    else if(height < 0 || radius < 0) {
        printf("INVALID INPUT!A");
    }
    return 0;
}

