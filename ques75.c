/*
Q76: Write a program to check if a matrix is symmetric.

Sample Test Case 1:

Input:
2 2
1 2
2 1

Output:
True

Sample Test Case 2:

Input:
2 2
1 0
2 1

Output:
False
*/

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols, i, j;
    int flag = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Symmetric matrix must be square
    if(rows != cols)
    {
        flag = 0;
    }
    else
    {
        // Check symmetry
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(arr[i][j] != arr[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}