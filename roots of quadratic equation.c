#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    // Prompt user for coefficients and constant term
    printf("Enter coefficient of x^2: ");
    scanf("%f", &a);

    printf("Enter coefficient of x: ");
    scanf("%f", &b);

    printf("Enter constant term: ");
    scanf("%f", &c);

    // Compute the discriminant
    d = b * b - 4 * a * c;

    // Check the discriminant value and calculate the roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("r1 = %.2f\n", r1);
        printf("r2 = %.2f\n", r2);
    } else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("r1 = r2 = %.2f\n", r1);
    } else {
        float rp = -b / (2 * a); // real part
        float ip = sqrt(-d) / (2 * a); // imaginary part
        printf("Roots are complex and different.\n");
        printf("r1 = %.2f + %.2fi\n", rp, ip);
        printf("r2 = %.2f - %.2fi\n", rp, ip);
    }

    return 0;
}
