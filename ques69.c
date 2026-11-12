/*
Q69: Write a C program to find the second largest element in an array.

Sample Input:
5
10 20 30 40 50

Sample Output:
40
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element");
    } else {
        printf("%d", second);
    }

    return 0;
}