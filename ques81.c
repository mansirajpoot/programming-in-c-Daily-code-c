/*
Q81: Write a C program to count characters in a string
without using built-in length functions.

Sample Test Case 1:
Input:
Hello
Output:
5

Sample Test Case 2:
Input:
(space)
Output:
1
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    printf("%d", i);

    return 0;
}