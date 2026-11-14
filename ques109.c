/*
Q109: Write a C program to find the maximum sum
of all subarrays of size K.

Sample Test Case:

Input:
4
100 200 300 400
2

Output:
700

*/

#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, sum, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid K");
        return 0;
    }

    max = -999999;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}