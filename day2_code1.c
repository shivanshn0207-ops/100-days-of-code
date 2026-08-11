// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    float length, breadth, perimeter, area;

    printf("Enter the length of the rectangle:");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle:");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("The area of the given rectangle is %.2f\n", area);

    perimeter = 2 * (length + breadth);
    printf("The perimeter of the given rectangle is %.2f\n", perimeter);

    return 0;
}