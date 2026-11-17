/*
Q123: Read a text file and count the total number of characters,
words, and lines. A word is a sequence of non-space characters
separated by spaces or newlines.

Sample Input:
File: sample.txt
Content:
Hello world
This is C programming

Sample Output (as listed on the website):
Characters: 31
Words: 5
Lines: 2

Note: The actual character count for the displayed content,
including the newline, is 33.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace((unsigned char)ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}