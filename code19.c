#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of a triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // First check if the sides can form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        
        // All sides equal
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Any two sides equal
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        // All sides different
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
