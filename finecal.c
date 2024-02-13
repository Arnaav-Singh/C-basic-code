#include <stdio.h>

int main() {
    
    int daysLate;

   
    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    
    if (daysLate >= 1 && daysLate <= 5) {
        printf("Fine: Rs. 0.5\n");
    } else if (daysLate >= 6 && daysLate <= 10) {
        printf("Fine: Rs. 1\n");
    } else if (daysLate > 10 && daysLate <= 30) {
        printf("Fine: Rs. 5\n");
    } else if (daysLate > 30) {
        printf("Fine: Rs. 10\n");
    } else {
        printf("No fine. Book returned on time.\n");
    }

    return 0;
}
