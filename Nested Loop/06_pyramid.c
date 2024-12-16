//INCORRECT

// Write a C program to print  

/*  1 
    2  3
    4  5  6
    7  8  9  10
    11  12  13  14  15         */

#include <stdio.h>

int main() {
    int i, j, k = 1;

    // Outer loop: starts at i = 5 and decreases until i = 1
    // This controls the number of rows printed
    for (i = 1; i <= 5; i++) {
        
        // Inner loop: prints numbers from 1 up to the current value of i
        // The number of columns decreases with each row
        for (j = 0; j < i; j++) {
            // Print the current number (j)
            printf(" %d ", k + j);
        }

        // After printing all numbers for the current row, print a newline
        printf("\n");
    }

    k += i;
    printf("\n");
    return 0;
}


