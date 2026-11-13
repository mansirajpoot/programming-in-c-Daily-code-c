/*
Q77: Write a program to check if the elements
on the diagonal of a matrix are distinct.

Sample Test Case 1:

Input:
3 3
1 2 3
4 5 6
7 8 1

Output:
False

Sample Test Case 2:

Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
True
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

    // Check diagonal elements
    if(rows != cols)
    {
        flag = 0;
    }
    else
    {
        for(i = 0; i < rows; i++)
        {
            for(j = i + 1; j < rows; j++)
            {
                if(arr[i][i] == arr[j][j])
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