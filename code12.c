#include <stdio.h>
int main() {
    int n;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Nested if-else to check whether the number is positive, negative, or zero
    if (n != 0) {
        if (n > 0) {
            printf("%d is positive.\n", n);
        } else {
            printf("%d is negative.\n", n);
        }
    } else {
        printf("%d is zero.\n", n);
    }
    return 0;
}
