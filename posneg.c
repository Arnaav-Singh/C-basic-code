#include <stdio.h>
int main(){
    float number;
    printf("Enter the number: ");
    scanf("%f",&number);
    if (number == 0) {
        printf("The number is zero.\n");
    } else if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
    


