
/*
Q140: Define a struct with enum Gender
and print person's gender.

Sample Test Case:
Input: Gender=MALE
Output: Male

Additional Test Cases:
Input: Gender=FEMALE
Output: Female
*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE, FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {

    struct Person p;
    char input[20];

    scanf("%19s", input);

    if (strcmp(input, "Gender=MALE") == 0)
        p.gender = MALE;

    else if (strcmp(input, "Gender=FEMALE") == 0)
        p.gender = FEMALE;

    else {
        printf("Invalid gender");
        return 0;
    }

    if (p.gender == MALE)
        printf("Male");

    else
        printf("Female");

    return 0;
}
