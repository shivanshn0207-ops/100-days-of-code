#include <stdio.h> //Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
int main()
{
    int number1, number2, sum;
    printf("Enter number 1:");
    scanf("%d", &number1);
    printf("Enter number 2:");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("the sum of the given numbers is %d", sum);
    return 0;
}