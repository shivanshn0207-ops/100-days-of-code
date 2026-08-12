// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter the Temperature in celsius:");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}