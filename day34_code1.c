// Insert an element in an array at a given position
#include <stdio.h>
int main()
{
    int arr[100], pos, i, n, value;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = value;

    // Increment the number of elements
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}