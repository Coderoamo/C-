#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Raw Equation: 2 * %.5lf * %.0lf\n", PI, radius);
    printf("Result: %.2lf", circumference);

    return 0;

}