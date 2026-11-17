/*
Q122: Write a C program that opens an existing file (info.txt)
and reads its contents using fgets(). Print all lines until EOF.

Sample Input:
File: info.txt
Content:
Name: Rahul
Age: 23

Sample Output:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}