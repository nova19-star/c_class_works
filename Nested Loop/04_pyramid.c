// Write a C program to print  
/*  *  *  *  *  * 
    *  *  *  *
    *  *  *
    *  *
    *             */

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop: starts at i = 5 and decreases until i = 1
    // This controls the number of rows printed
    for (i = 5; i >= 1; i--) {
        
        // Inner loop: prints numbers from 1 up to the current value of i
        // The number of columns decreases with each row
        for (j = 1; j <= i; j++) {
            // Print the current number (j)
            printf(" * ");
        }

        // After printing all numbers for the current row, print a newline
        printf("\n");
    }

    return 0;
}