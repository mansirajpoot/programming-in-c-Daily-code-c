/*
Q73: Write a program to find the sum of each row
of a matrix and store it in an array.

Sample Test Case:

Input:
2 3
1 2 3
4 5 6

Output:
6 15
*/

#include <stdio.h>

int main()
{
    int arr[10][10], sum[10];
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

    // Calculate sum of each row
    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    // Print row sums
    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}