/*
Q119: Write a C program to find the repeated
element in an array. Only one element is repeated.

Sample Test Case:

Input:
4
1 3 3 4

Output:
3

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int result = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        result = result ^ arr[i];
    }

    for(i = 1; i <= n - 1; i++)
    {
        result = result ^ i;
    }

    printf("%d", result);

    return 0;
}