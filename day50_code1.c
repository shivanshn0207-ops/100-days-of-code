// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Date in new format: ");

    if (month == 1)
        printf("%d-Jan-%d", day, year);
    else if (month == 2)
        printf("%d-Feb-%d", day, year);
    else if (month == 3)
        printf("%d-Mar-%d", day, year);
    else if (month == 4)
        printf("%d-Apr-%d", day, year);
    else if (month == 5)
        printf("%d-May-%d", day, year);
    else if (month == 6)
        printf("%d-Jun-%d", day, year);
    else if (month == 7)
        printf("%d-Jul-%d", day, year);
    else if (month == 8)
        printf("%d-Aug-%d", day, year);
    else if (month == 9)
        printf("%d-Sep-%d", day, year);
    else if (month == 10)
        printf("%d-Oct-%d", day, year);
    else if (month == 11)
        printf("%d-Nov-%d", day, year);
    else if (month == 12)
        printf("%d-Dec-%d", day, year);
    else
        printf("Invalid month");

    return 0;
}