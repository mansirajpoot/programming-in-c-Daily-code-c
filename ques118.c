/*
Q118: Write a C program to find the missing number
from an array containing numbers from 0 to N.

Sample Test Case:

Input:
4
0 3 2 4

Output:
1

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int total = 0, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}