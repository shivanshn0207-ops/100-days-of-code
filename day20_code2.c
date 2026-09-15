// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    long long binary, digit;
    long long result = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0)
    {
        digit = binary % 10;

        if (digit == 0)
            result = result + 1 * place;
        else
            result = result + 0 * place;

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %lld", result);

    return 0;
}