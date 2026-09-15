// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF = %d", a);

    return 0;
}
