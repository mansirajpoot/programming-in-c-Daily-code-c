/*
Q108: Write a C program to calculate the product
of all array elements except the current element.

Sample Test Case:

Input:
4
1 2 3 4

Output:
24 12 8 6

*/

#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int n, i, j, product;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * arr[j];
            }
        }

        result[i] = product;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}