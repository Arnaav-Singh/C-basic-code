#include <stdio.h>

int main() {
    // Demonstrate break and continue in a while loop
    printf("Demonstrating break and continue in a while loop:\n");
    int i = 1;
    while (i <= 5) {
        // Using break to exit the loop when i is 3
        if (i == 3) {
            printf("Encountered 3. Breaking out of the loop.\n");
            break;
        }

        // Using continue to skip the iteration when i is 2
        if (i == 2) {
            printf("Skipping iteration when i is 2.\n");
            i++;
            continue;
        }

        printf("Iteration %d\n", i);
        i++;
    }

    // Demonstrate break and continue in a do-while loop
    printf("\nDemonstrating break and continue in a do-while loop:\n");
    int j = 1;
    do {
        // Using break to exit the loop when j is 4
        if (j == 4) {
            printf("Encountered 4. Breaking out of the loop.\n");
            break;
        }

        // Using continue to skip the iteration when j is 2
        if (j == 2) {
            printf("Skipping iteration when j is 2.\n");
            j++;
            continue;
        }

        printf("Iteration %d\n", j);
        j++;
    } while (j <= 5);

    return 0;
}
