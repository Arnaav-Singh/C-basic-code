#include <stdio.h>

int main() {
    
    int x;
    int y;

    
    printf("Enter the value of x: ");
    scanf("%d", &x);

    
    if (x > 0) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = -1;
    }

    
    printf("Y: %d\n", y);

    return 0;
}
