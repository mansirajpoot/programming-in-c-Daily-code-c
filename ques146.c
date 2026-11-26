
/*
Q146: Create Employee structure with nested
Date structure for joining date and print details.

Sample Test Case:
Input:
Raj 11 12 05 2020

Output:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

Explanation:
Nested structure Date is used inside Employee
structure to represent joining date.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {

    struct Employee e;

    scanf("%49s", e.name);
    scanf("%d", &e.id);

    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}
