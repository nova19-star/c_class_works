// While loop

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


// Sum of digits

#include <stdio.h>
int main(){
    int num, sum=0, rem;
    printf("Enter a number");
    scanf("%d", &num);

    while(num!=0){
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    printf("The sum of its digits is%d", sum);
    return 0;
}

// Reverse of a number 

#include <stdio.h>
int main(){
    int num, rev=0, rem;
    printf("Enter a number");
    scanf("%d", &num);

    while (num!=0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("The reverse of the number is %d", rev);
return 0;
}

// Palindrum of a number 

#include <stdio.h>
int main(){
    int num,rev = 0,rem,temp;
    print("Enter a number");
    scanf("%d", &num);

    while (num!=0){
        rem = num * 10;
        rev = num / 10 + rem
        num = num / 10;    
    }
    print("The reverse of a number is %d", rev);
    if (rev == temp)
        printf("The number is pallindrum");
    else
        printf("The number is not pallindrum");
    return 0;
}