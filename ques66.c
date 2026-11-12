/*
Q66: Write a C program to insert an element into a sorted array.

Sample Input:
5
1 2 4 5 6
3

Sample Output:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int arr[100], n, value, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &value);

    i = n - 1;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}