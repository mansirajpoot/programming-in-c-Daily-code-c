/*
Q115: Write a C program to check whether two
lowercase strings are anagrams.

Sample Test Case:

Input:
anagram
nagaram

Output:
Anagram

*/

#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int freq[26] = {0};
    int i, flag = 1;

    scanf("%s", s1);
    scanf("%s", s2);

    for(i = 0; s1[i] != '\0'; i++)
    {
        freq[s1[i] - 'a']++;
    }

    for(i = 0; s2[i] != '\0'; i++)
    {
        freq[s2[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}