/*
Q112: Write a C program to find the maximum sum
of a contiguous subarray using Kadane's algorithm.

Sample Test Case:

Input:
7
2 3 -8 7 -1 2 3

Output:
11

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int currentSum, maxSum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    currentSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}