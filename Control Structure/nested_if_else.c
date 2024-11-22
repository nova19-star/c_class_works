/*
if (condition1) {
    // Block of code if condition1 is true
    if (condition2) {
        // Block of code if condition2 is true
    }
    else {
        // Block of code if condition2 is false
    }
}
else {
    // Block of code if condition1 is false
    if (condition3) {
        // Block of code if condition3 is true
    }
    else {
        // Block of code if condition3 is false
    }
}
*/


// Input three numbers and display the greatest number among them

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

if (a > b) 
    {
        if (a > c)
            printf("The greatest number = %d",a);
        else
            printf("The greatest number = %d",b);
    }
else
    {
        if (b > c)
            printf("The greatest number = %d",b);
        else
            printf("The greatest number = %d",c); 
    }
return 0;    
}