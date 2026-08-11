// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{
    float r, area, perimeter;
    const float Pi = 3.14;

    printf("Enter the radius:");
    scanf("%f", &r);

    perimeter = 2 * Pi * r;
    printf("The perimeter of the given circle is %.2f\n", perimeter);

    area = Pi * r * r;
    printf("The area of the given circle is %.2f\n", area);

    return 0;
}