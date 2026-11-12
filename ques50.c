//Q50: Write a program to print the following pattern

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 5; k >= i; k--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}