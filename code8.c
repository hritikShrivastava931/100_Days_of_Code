#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;

}
