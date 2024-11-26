// Factorial of a number

#include <stdio.h>
int main() {
    int num, fact = 1;  
    printf("Enter a number: ");
    scanf("%d", &num); 

    while (num != 0) {  
        fact = fact * num;  
        num = num - 1;  
    }

    printf("The factorial is = %d\n", fact);

    return 0;  
}

// Counting the numbers of digits
#include <stdio.h>  

int main() {
    int num, count = 0, rem; 

    printf("Enter a number \n"); 
    scanf("%d", &num); 

    while (num != 0) {  
        count = count + 1;
        num = num / 10;  
    }

    printf("The number of digits is %d", count); 
    return 0;
}

