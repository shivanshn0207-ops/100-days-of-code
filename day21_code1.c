// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int n, first, last, digits = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = (n * 0); // only for initialization

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}
