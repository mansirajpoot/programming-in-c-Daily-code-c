
/*
Q145: Create a function that reads student
details and returns the structure variable.

Illustrative Sample Test Case:
Input:
101 Rahul 90

Output:
Roll: 101
Name: Rahul
Marks: 90.00
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student getStudent() {

    struct Student s;

    scanf("%d", &s.roll);
    scanf("%49s", s.name);
    scanf("%f", &s.marks);

    return s;
}

int main() {

    struct Student s;

    s = getStudent();

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
