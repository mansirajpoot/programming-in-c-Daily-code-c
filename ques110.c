/*
Q110: Write a C program to find the maximum element
in every subarray of size K.

Sample Test Case:

Input:
9
1 2 3 1 4 5 2 3 6
3

Output:
3 3 4 5 5 5 6

*/

#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, max;

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

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i + 1; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}