// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int low, high, mid;
    int first = -1, last = -1;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("First and last occurrence = %d,%d", first, last);

    return 0;
}