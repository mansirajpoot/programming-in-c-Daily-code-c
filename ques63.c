/*
Q63: Write a C program to merge two arrays.

Sample Input:
3
1 2 3
2
4 5

Sample Output:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int a[100], b[100], i, n1, n2;

    scanf("%d", &n1);

    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n2; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}