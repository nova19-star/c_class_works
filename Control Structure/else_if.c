// Enter the marks of all three different subjects of studemtd find percentage and display the grades of students basis on the percentage 


#include <stdio.h>

int main() {
    float m1, m2, m3, perc;
    char grade;

    // Input marks for three subjects
    printf("Enter the marks of three different subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    // Calculate percentage
    perc = (m1 + m2 + m3) / 300 * 100;

    // Determine grade based on percentage
    if (perc >= 90 && perc <= 100) {
        grade = 'O';
    } else if (perc >= 80 && perc < 90) {
        grade = 'E';
    } else if (perc >= 70 && perc < 80) {
        grade = 'A';
    } else {
        grade = 'F';
    }

    // Output the grade and percentage
    printf("Percentage: %.2f%%\n", perc);
    printf("Grade: %c\n", grade);

    return 0;
}
