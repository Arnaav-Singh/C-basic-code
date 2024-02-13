#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &originalNumber);

    int temp = originalNumber;

    while (temp > 0) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
