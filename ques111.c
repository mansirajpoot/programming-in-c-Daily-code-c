/*
Q111: Write a C program to find the first negative
integer in every subarray of size K.

If no negative element exists, print 0.

Sample Test Case:

Input:
5
-8 2 3 -6 10
2

Output:
-8 0 -6 -6

*/

#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, found;

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
        found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}