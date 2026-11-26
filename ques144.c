
/*
Q144: Create a structure for a student.
Pass its variable to a function and display
the student's details.

Illustrative Sample Test Case:
Input:
101 Rahul 85

Output:
Roll: 101
Name: Rahul
Marks: 85.00
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s) {

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {

    struct Student s;

    scanf("%d", &s.roll);
    scanf("%49s", s.name);
    scanf("%f", &s.marks);

    display(s);

    return 0;
}
