/*
Q116: Write a C program to find two distinct
indices whose elements add up to the target.

Sample Test Case:

Input:
4
2 7 11 15
9

Output:
0 1

*/

#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}