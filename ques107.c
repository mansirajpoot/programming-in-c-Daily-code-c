/*
Q107: Write a C program to find the previous greater
element on the left side of every array element.

Use nested loops. Do not use stack.

Sample Test Case:

Input:
5
6 8 0 1 3

Output:
-1, -1, 8, 8, 8

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int prev;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        prev = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }

        printf("%d", prev);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}