/*
Q67: Write a C program to insert an element at a given position in an array.

Sample Input:
4
10 20 30 40
2 15

Sample Output:
10 20 15 30 40

Note: Position starts from 1.
*/

#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}