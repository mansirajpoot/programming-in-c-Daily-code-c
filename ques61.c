/*
Q61: Write a C program to search an element in an array using Linear Search.

Sample Input:
5
1 2 3 4 5
3

Sample Output:
Found at index 2
*/

#include <stdio.h>

int main() {
    int n, arr[100], key, i, found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Found at index %d", found);
    } else {
        printf("-1");
    }

    return 0;
}