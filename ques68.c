/*
Q68: Write a C program to delete an element from an array at a given position.

Sample Input:
5
1 2 3 4 5
2

Sample Output:
1 3 4 5

Note: Position starts from 1.
*/

#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}