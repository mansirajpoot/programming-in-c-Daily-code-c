/*
Q71: Write a C program to read and print a matrix.

Sample Test Case:

Input:
2 2
1 2
3 4

Output:
1 2
3 4
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j;

    // Input number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}