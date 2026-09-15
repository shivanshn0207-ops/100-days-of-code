// Find the sum of all elements in a matrix
#include <stdio.h>

int main()
{
    int r, c;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
