#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    double discriminant = b * b - 4 * a * c;

    switch ((int)copysign(1.0, discriminant)) {
        case 1:
            // Two real and distinct roots
            {
                double root1 = (-b + sqrt(discriminant)) / (2 * a);
                double root2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("Two real and distinct roots: %.2lf and %.2lf\n", root1, root2);
            }
            break;
        case 0:
            // One real root
            {
                double root = -b / (2 * a);
                printf("One real root: %.2lf\n", root);
            }
            break;
        case -1:
            // Complex roots
            {
                double realPart = -b / (2 * a);
                double imaginaryPart = sqrt(-discriminant) / (2 * a);
                printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
                       realPart, imaginaryPart, realPart, imaginaryPart);
            }
            break;
        default:
            printf("Unhandled case.\n");
    }

    return 0;
}
