
/*
Q143: Store details of students and find
the student who has the highest marks.

Illustrative Sample Test Case:
Input:
3
101 Rahul 75
102 Amit 95
103 Raj 85

Output:
Topper: Amit
Highest Marks: 95.00
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s[100];
    int n, i, topper = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d", &s[i].roll);
        scanf("%49s", s[i].name);
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < n; i++) {

        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s\n", s[topper].name);
    printf("Highest Marks: %.2f", s[topper].marks);

    return 0;
}
