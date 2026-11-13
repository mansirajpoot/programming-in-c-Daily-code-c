/*
Q89: Write a C program to count the frequency
of a given character in a string.

Sample Test Case:

Input:
programming
g

Output:
2
*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    fgets(str, sizeof(str), stdin);

    scanf(" %c", &ch);

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}