#include <stdio.h>

int main() {
    int n, i, j;

    // Get the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print each row
    for (i = 1; i <= n; i++) {
        // Loop to print each column in a row
        for (j = 1; j <= n; j++) {
            if (j <= i) {
                // Print the value of the current row
                printf("%d", i);
            } else {
                // Print the value of the current column
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}
