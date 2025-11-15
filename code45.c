#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}
