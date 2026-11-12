/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j, k;

    // Upper pyramid
    for (i = 1; i <= 4; i++) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower pyramid
    for (i = 3; i >= 1; i--) {

        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}