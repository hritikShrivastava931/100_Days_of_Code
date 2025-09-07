#include <stdio.h>

int main() {
    int a,b,sum;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    // Calculating sum
    sum = a + b;

    // Displaying result
    printf("The sum of %d and %d is: %d\n",a,b,sum);
    return 0;
}