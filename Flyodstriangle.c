#include <stdio.h>

int main() {
    int N;

    
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &N);

    for (int i = 1, number = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j, ++number) {
            printf("%d ", number);
        }
        printf("\n");
    }

    return 0;
}
