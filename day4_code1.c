#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    // arithmetic operations to swap values
    a += b;
    b = a - b;
    a -= b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}