// Write a C program to print 
/*  * 
    *  *
    *  *  *
    *  *  *  *
    *  *  *  *  *   */

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: controls the number of rows (starts at 1 and runs until i <= 5)
    for (i = 1; i <= 5; i++) {
        
        // Inner loop: controls the number of columns (prints stars on each row)
        // It runs i times, where i is the current row number
        for (j = 1; j <= i; j++) {
            // Print a star in the current column (the number of stars increases with each row)
            printf(" * ");
        }

        // After printing all stars in a row, print a newline character
        printf("\n");
    }

    return 0;
}

