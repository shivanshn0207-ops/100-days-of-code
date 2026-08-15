// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/
#include <stdio.h>
int main()
{
    int num1, num2, sum, difference, product, quotient;

    printf("Enter number 1:");
    scanf("%d", &num1);

    printf("Enter number 2:");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of the two numbers is %d\n", sum);

    difference = num1 - num2;
    printf("the difference of the two numbers is %d\n", difference);

    product = num1 * num2;
    printf("the product of the two numbers is %d\n", product);

    quotient = num1 / num2;
    printf("the quotient of the two numbers is %d\n", quotient);

    return 0;
}