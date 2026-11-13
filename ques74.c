/*
Q74: Write a program to find the transpose of a matrix.

Sample Test Case:

Input:
2 3
1 2 3
4 5 6

Output:
1 4
2 5
3 6
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print transpose
    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}