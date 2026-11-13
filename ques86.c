/*
Q86: Write a C program to check whether
a string is a palindrome.

Sample Test Case 1:

Input:
madam

Output:
Palindrome

Sample Test Case 2:

Input:
hello

Output:
Not palindrome
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j;
    int flag = 1;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    j = i - 1;

    i = 0;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}