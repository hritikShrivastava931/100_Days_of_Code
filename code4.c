#include <stdio.h>

int main() {
    float r,a,c; //r=radius, a=area, c=circumference
    float pi = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    a = pi * r * r;
    c = 2 * pi * r;

    printf("a = %.2f\n", a);
    printf("C = %.2f\n", c);

    return 0;
}