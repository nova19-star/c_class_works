// Write a C program to print  
/*  *
    *  * 
    *  *  *  
    *  *  *  *
    *  *  *  *  * 
    *  *  *  *
    *  *  *
    *  *
    *             */

#include <stdio.h>

int main() {
    int i, j;

    // Upper half of the pattern: increasing number of stars (1 to 5)
    for (i = 1; i <= 5; i++) {
        // Inner loop: print stars for the current row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // After printing all stars in the current row, print a newline
        printf("\n");
    }

    // Lower half of the pattern: decreasing number of stars (4 to 1)
    for (i = 4; i >= 1; i--) {
        // Inner loop: print stars for the current row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // After printing all stars in the current row, print a newline
        printf("\n");
    }

    return 0;
}
