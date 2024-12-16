// Write a C program to print  
/*  5  5  5  5  5 
    4  4  4  4
    3  3  3
    2  2
    1             */

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
            printf(" %d ",i);
        }

        // After printing all numbers for the current row, print a newline
        printf("\n");
    }

    return 0;
}