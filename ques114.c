/*
Q114: Write a C program to find the length of the
longest substring without repeating characters.

Sample Test Case:

Input:
abcabcbb

Output:
3

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int len = 0, max = 0;
    int flag;

    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
        int freq[256] = {0};
        int count = 0;

        for(j = i; j < len; j++)
        {
            if(freq[(unsigned char)str[j]] == 1)
            {
                break;
            }

            freq[(unsigned char)str[j]]++;
            count++;
        }

        if(count > max)
        {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}