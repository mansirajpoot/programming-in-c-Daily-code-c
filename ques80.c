/*
Q80: Write a program to multiply two matrices.

Sample Test Case:

Input:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Output:
58 64
139 154
*/

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    // Input first matrix
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    // Input second matrix
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Check multiplication condition
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible");
    }
    else
    {
        // Initialize result matrix
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
            }
        }

        // Multiply matrices
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                for(k = 0; k < c1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Print result
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", mul[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}