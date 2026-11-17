/*
Q121: Write a C program that creates a text file named info.txt
in write mode. Take the user's name and age as input and write
them to the file using fprintf().

Sample Input:
Name: Rahul
Age: 23

Sample Output:
File created successfully! Data written to info.txt

File Content (info.txt):
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("File could not be created.");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}