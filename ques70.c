/*
Q70: Write a C program to rotate an array right by K positions.

Sample Input:
5
1 2 3 4 5
2

Sample Output:
4 5 1 2 3
*/

#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int n, k, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (n <= 0) {
        return 0;
    }

    k = k % n;

    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}