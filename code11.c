#include <stdio.h>
int main() {
    int n;
 // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if the number is even or odd
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0;
}
