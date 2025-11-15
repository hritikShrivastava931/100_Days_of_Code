#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1; 
    int hasOddDigit = 0;   

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOddDigit = 1;
        }
        num = num / 10; 
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %lld\n", product);
    } else {
        printf("No odd digits in the number.\n");
    }

    return 0;
}
