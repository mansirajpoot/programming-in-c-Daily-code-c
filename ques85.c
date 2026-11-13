/*
Q85: Write a C program to reverse a string.

Sample Test Case:

Input:
abcd

Output:
dcba
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j;
    char temp;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    j = i - 1;

    i = 0;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("%s", str);

    return 0;
}