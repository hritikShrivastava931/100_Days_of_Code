#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, si, ci;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100;

    ci = p * (pow((1 + r / 100), t)) - p;

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}