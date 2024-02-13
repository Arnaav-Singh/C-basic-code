#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Enter a number: ");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
            printf("The smallest number is %d\n", a);
        } else {
            printf("The smallest number is %d\n", c);
        }
    } else {
        if (b < c) {
            printf("The smallest number is %d\n", b);
        } else {
            printf("The smallest number is %d\n", c);
        }
    }

    return 0;
}
