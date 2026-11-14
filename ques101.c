/*
Q101: Write a C program to find the first and last
occurrence of a target element in a sorted array.
Print -1, -1 if the target is not present.

Sample Test Case:

Input:
6
5 7 7 8 8 10
8

Output:
3,4

*/

#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, first = -1, last = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}