#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter number: ");
    scanf("%d",&num2);
    printf("Enter number: ");
    scanf("%d",&num3);

   

    
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
