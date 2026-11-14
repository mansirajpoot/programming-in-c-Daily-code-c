/*
Q117: Write a C program to merge two sorted arrays
into one sorted array.

Sample Test Case:

Input:
4
2 7 11 15
3
4 8 10

Output:
2 4 7 8 10 11 15

*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i = 0, j = 0, k = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;

    // Merge both sorted arrays
    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of first array
    while(i < n)
    {
        c[k++] = a[i++];
    }

    // Copy remaining elements of second array
    while(j < m)
    {
        c[k++] = b[j++];
    }

    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}