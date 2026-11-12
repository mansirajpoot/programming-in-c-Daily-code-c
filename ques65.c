/*
Q65: Write a C program to search an element in a sorted array using Binary Search.

Sample Input:
5
1 3 5 7 9
7

Sample Output:
Found at index 3

Sample Input:
5
1 3 5 7 9
6

Sample Output:
-1
*/

#include <stdio.h>

int main() {
    int n, arr[100], key;
    int low, high, mid, found = -1;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Found at index %d", found);
    } else {
        printf("-1");
    }

    return 0;
}