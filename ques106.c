/*
Q106: Write a C program to find the next greater
element on the right side of every array element.

Use nested loops. Do not use stack.

Sample Test Case:

Input:
4
1 3 2 4

Output:
3, 4, 4, -1

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int next;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}