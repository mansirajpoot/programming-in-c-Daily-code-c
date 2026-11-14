/*
Q104: Write a C program to find the pivot integer x
such that the sum from 1 to x equals the sum from
x to n.

Sample Test Case:

Input:
8

Output:
6

*/

#include <stdio.h>

int main()
{
    int n, x;
    long long total, left, right;

    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;

    for(x = 1; x <= n; x++)
    {
        left = (long long)x * (x + 1) / 2;

        right = total - (long long)(x - 1) * x / 2;

        if(left == right)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}