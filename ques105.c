/*
Q105: Write a C program to find the majority element.
An element must appear more than n/2 times.

Sample Test Case:

Input:
7
2 2 1 1 1 2 2

Output:
2

*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int count, found = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            printf("%d", arr[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}