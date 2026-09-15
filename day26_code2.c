/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 */
#include <stdio.h>

int main()
{
    int i, j, n;

    for (n = 1; n <= 4; n++)
    {

        if (n == 1)
            n = 4;
        else if (n == 4)
            n = 5;
        else if (n == 5)
            n = 3;
        else
            n = 1;

        for (i = 1; i <= n; i++)
        {
            printf("*\n");
        }

        printf("\n");

        if (n == 1)
            break;
    }

    return 0;
}
