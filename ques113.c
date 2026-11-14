/*
Q113: Write a C program to find the Kth smallest
element in an array.

Sample Test Case:

Input:
10
10 5 4 3 48 6 2 33 53 10
4

Output:
5

*/

#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid K");
        return 0;
    }

    // Sort array using bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);

    return 0;
}