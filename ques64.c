/*
Q64: Write a C program to find the digit occurring maximum times in an integer.

Sample Input:
112233

Sample Output:
1

Sample Input:
887799

Sample Output:
7
*/

#include <stdio.h>

int main() {
    int n, digit, i;
    int freq[10] = {0};
    int max = 0, result = 0;

    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        freq[0]++;
    }

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}