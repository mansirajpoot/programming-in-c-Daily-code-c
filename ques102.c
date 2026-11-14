/*
Q102: Write a C program to find the index of the
smallest element greater than or equal to x.

Sample Test Case:

Input:
7
1 2 8 10 11 12 19
5

Output:
2

*/

#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int i, index = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}