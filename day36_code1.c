// Read and print a matrix
#include <stdio.h>

int main()
{
    int r, c;
    int matrix[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}