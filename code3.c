#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}