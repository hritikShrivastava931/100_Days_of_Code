#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Input value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}