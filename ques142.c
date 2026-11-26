
/*
Q142: Create an array of structures to store
details of multiple students and display them.

Illustrative Sample Test Case:
Input:
2
101 Rahul 80
102 Amit 90

Output:
101 Rahul 80.00
102 Amit 90.00
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s[100];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d", &s[i].roll);
        scanf("%49s", s[i].name);
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < n; i++) {

        printf("%d %s %.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    return 0;
}
