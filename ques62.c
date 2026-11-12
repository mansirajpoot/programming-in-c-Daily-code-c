/*
Q62: Write a C program to reverse an array without using extra space.

Sample Input:
4
1 2 3 4

Sample Output:
4 3 2 1
*/

#include <stdio.h>

int main() {
    int n, arr[100], i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = n - 1;

    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}