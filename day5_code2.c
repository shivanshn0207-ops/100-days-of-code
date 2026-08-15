#include <stdio.h>
int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter the total minutes to be converted:");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;          // 3600 seconds in an hours
    minutes = (total_seconds % 3600) / 60; // remaining seconds converted to minutes
    seconds = total_seconds % 60;          // leftover seconds
    printf("%d Seconds = %d:%d:%d (hh:mm:ss)\n", total_seconds, hours, minutes, seconds);
    return 0;
}