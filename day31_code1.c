// Search for an element in an array using linear search
#include <stdio.h>

int main()
{
    int n, arr[100], key, i;
    int index = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}