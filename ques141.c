
/*
Q141: Create a structure to store student
details such as roll number, name and marks.
Read the details and display them.

Illustrative Sample Test Case:
Input:
101
Rahul
85.5

Output:
Roll Number: 101
Name: Rahul
Marks: 85.50
*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s;

    scanf("%d", &s.roll);
    scanf("%49s", s.name);
    scanf("%f", &s.marks);

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
