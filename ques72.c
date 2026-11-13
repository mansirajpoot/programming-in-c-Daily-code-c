/*
Q72: Write a program to find the sum of all elements in a matrix.

Sample Test Case:

Input:
2 3
1 2 3
4 5 6

Output:
21
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}