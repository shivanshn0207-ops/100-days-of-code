// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int choice;
    float a, b;
    printf("Enter the two numbers:");
    scanf("%f,%f", &a, &b);
    printf("Select one of the following operations:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum = %.2f", a + b);
    case 2:
        printf("Difference = %.2f", a - b);
        break;
    case 3:
        printf("Product = %.2f", a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Quotient = %.2f", a / b);
        }
        else
        {
            printf("Division by zero isn't allowed");
        }
        break;
    case 5:
        if (b != 0)
        {
            printf("Remainder = %.2f", a % b);
        }
        else
        {
            printf("Division by zero isn't allowed");
        }
    }

    return 0;
}