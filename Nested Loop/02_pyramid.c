// Write a C program to print  
 /* 1  2
    1  2  3
    1  2  3  4
    1  2  3  4  5 */

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: controls the number of rows (1 to 5)
    for (i = 1; i <= 5; i++) {
        
        // Inner loop: prints numbers in each row, from 1 up to the current value of i
        for (j = 1; j <= i; j++) {
            // Print the current value of j in the row
            printf(" %d ", j);
        }

        // After printing all numbers in the current row, print a newline character
        // This ensures that the next row starts on a new line
        printf("\n");
    }

    return 0;
}
