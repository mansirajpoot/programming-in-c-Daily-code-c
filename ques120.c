/*
Q120: Write a C program to take a string input
and convert the first letter of every word
to uppercase and remaining letters to lowercase.

Sample Test Case:

Input:
I am trying to build logic.

Output:
I Am Trying To Build Logic

*/

#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }

        i++;
    }

    printf("%s", str);

    return 0;
}