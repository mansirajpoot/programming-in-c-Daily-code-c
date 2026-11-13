/*
Q87: Write a C program to count spaces,
digits, and special characters in a string.

Sample Test Case:

Input:
a b1&2

Output:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(!((str[i] >= 'A' && str[i] <= 'Z') ||
                  (str[i] >= 'a' && str[i] <= 'z')))
        {
            special++;
        }

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}