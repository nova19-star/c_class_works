/*  while (condition) {
    Block of code to be executed
*/

// Factorial of a number
#include <stdio.h>

int main() {
    int num, fact = 1;  // Declare integer variables num and fact, with fact initialized to 1
    printf("Enter a number: \n ");  // Prompt the user to enter a number
    scanf("%d", &num);  // Read the integer input from the user and store it in num

    // Calculate the factorial using a while loop
    while (num != 0) {  // Continue the loop as long as num is not zero
        fact = fact * num;  // Multiply the current value of fact by num
        num = num - 1;  // Decrement num by 1
    }

    // Print the result
    printf("The factorial is = %d\n", fact);  // Use %d to print the factorial as an integer

    return 0;  // Return 0 to indicate successful execution
}

// Counting the numbers of digits
#include <stdio.h>  // Include the standard input-output library for functions like printf and scanf

int main() {
    int num, count = 0, rem;  // Declare three integer variables: 'num' to store the input number, 'count' to count the digits, and 'rem' (which is unused in your code)

    printf("Enter a number \n");  // Print a message asking the user to enter a number
    scanf("%d", &num);  // Read the integer input from the user and store it in the variable 'num'

    while (num != 0) {  // Start a while loop that continues as long as 'num' is not zero
        count = count + 1;  // Increment 'count' by 1 each time the loop runs (this counts one digit of 'num')
        num = num / 10;  // Divide 'num' by 10 to remove the last digit (integer division)
    }

    printf("The number of digits is %d", count);  // Print the total number of digits counted
    return 0;  // Return 0 to indicate the program executed successfully
}

