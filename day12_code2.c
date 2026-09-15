// Q24: Write a program to calculate electricity bill based on units consumed with these rates:
/*First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
    float units;
    printf("Enter units consumed:");
    scanf("%f", &units);
    if (units <= 100)
    {
        printf("Amount payable = %.2f", units * 5.00);
    }
    else if (units <= 200)
    {
        printf("Amount payable = %.2f", (units * 5.00) + (units - 100) * 7.00);
    }
    else if (units <= 300)
    {
        printf("Amount payable = %.2f", (units * 5.00) + (units - 100) * 7.00 + (units - 200) * 10.00);
    }
    else if (units > 300)
    {
        printf("Amount payable = %.2f", (units * 5.00) + (units - 100) * 7.00 + (units - 200) * 10.00 + (units - 300) * 12.00);
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
