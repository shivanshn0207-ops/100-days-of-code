// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main()
{
    int n; // number to be checked
    printf("Enter the number to be checked:");
    scanf("%d", &n);
    if (n != 0) // outer if checks if the number is not zero
    {
        if (n > 0) // inner nested if-else determines the sign of the non-zero number
        {
            printf("Positive!");
        }
        else
        {
            printf("Negative!");
        }
    }
    else // executes only if the outer condition is false
    {
        printf("Zero");
    }
    return 0;
}
