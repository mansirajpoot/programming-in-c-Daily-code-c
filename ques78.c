/*
Q78: Write a program to find the sum of main
diagonal elements for a square matrix.

Sample Test Case:

Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
15
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check square matrix
    if(rows != cols)
    {
        printf("Not a square matrix");
    }
    else
    {
        // Calculate diagonal sum
        for(i = 0; i < rows; i++)
        {
            sum = sum + arr[i][i];
        }

        printf("%d", sum);
    }

    return 0;
}