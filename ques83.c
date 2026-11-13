/*
Q83: Write a C program to count vowels
and consonants in a string.

Sample Test Case:

Input:
hello

Output:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(str[i] == 'a' || str[i] == 'e' ||
               str[i] == 'i' || str[i] == 'o' ||
               str[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}