#include <stdio.h>  // Including the standard input-output library for using functions like printf and scanf

int main() {
    // Declare variables to store marks of three subjects, percentage, and grade
    float m1, m2, m3, perc;
    char grade;

    // Ask the user to enter the marks for three different subjects
    printf("Enter the marks of three different subjects: ");
    // Read the marks for each subject from user input and store them in m1, m2, m3
    scanf("%f%f%f", &m1, &m2, &m3);

    // Validate input to ensure marks are within the acceptable range (0 to 100)
    // If any of the marks are below 0 or above 100, print an error and exit the program
    if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
        printf("Error: Marks should be between 0 and 100.\n");  // Error message
        return 1;  // Return a non-zero value to indicate an error and terminate the program
    }

    // Calculate the total percentage based on marks from all three subjects
    // The maximum possible total marks are 300 (100 for each subject)
    perc = (m1 + m2 + m3) / 300 * 100;  // Formula for calculating percentage

    // Determine the grade based on the percentage
    // 'O' for Outstanding (90% or more)
    if (perc >= 90 && perc <= 100) {
        grade = 'O';  // 'O' stands for Outstanding
    }
    // 'E' for Excellent (80% to 89%)
    else if (perc >= 80 && perc < 90) {
        grade = 'E';  // 'E' stands for Excellent
    }
    // 'A' for Average (70% to 79%)
    else if (perc >= 70 && perc < 80) {
        grade = 'A';  // 'A' stands for Average
    }
    // 'F' for Fail (below 70%)
    else {
        grade = 'F';  // 'F' stands for Fail
    }

    // Print the calculated percentage (with two decimal places) and the corresponding grade
    printf("Percentage: %.2f%%\n", perc);  // Display percentage with 2 decimal points
    printf("Grade: %c\n", grade);  // Display the grade

    return 0;  // Return 0 to indicate the program executed successfully
}
