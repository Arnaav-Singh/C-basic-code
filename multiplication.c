#include <stdio.h>

int main() {
    int n,k,i,result,j ;  // Change n to the desired number of multiplication tables
     
printf("Enter the desired number for tables:- ");
scanf("%d",&n);
printf("Enter the desired number of terms: ");
scanf("%d",&k);
    for ( i = 1; i <= n; ++i) {
        printf("Multiplication table for %d:\n", i);
        for ( j = 1; j <= k; ++j) {
             result = i * j;
            printf("%d x %d = %d\n", i, j, result);
        }
        printf("\n");
    }

    return 0;
}


