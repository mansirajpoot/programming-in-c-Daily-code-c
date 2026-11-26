
/*
Q139: Show that enums store integers
by printing assigned values.

Sample Test Case:
Input: No input

Output:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {

    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    printf("SUCCESS=%d, ", s1);
    printf("FAILURE=%d, ", s2);
    printf("TIMEOUT=%d", s3);

    return 0;
}
