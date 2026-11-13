/*
Q79: Write a program to perform diagonal traversal
of a matrix.

Sample Test Case:

Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j, d;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Diagonal traversal
    for(d = 0; d < rows + cols - 1; d++)
    {
        if(d % 2 == 0)
        {
            // Traverse diagonals in reverse direction
            for(i = (d < rows ? d : rows - 1); i >= 0; i--)
            {
                j = d - i;

                if(j >= 0 && j < cols)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        else
        {
            // Traverse diagonals in forward direction
            for(i = (d - cols + 1 > 0 ? d - cols + 1 : 0);
                i <= (d < rows ? d : rows - 1); i++)
            {
                j = d - i;

                if(j >= 0 && j < cols)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }

    return 0;
}