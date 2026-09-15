// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

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
