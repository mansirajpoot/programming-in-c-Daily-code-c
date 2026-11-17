/*
Q125: Open an existing file in append mode and allow the user
to enter a new line of text. Append the text at the end without
overwriting existing content.

Sample Input:
Existing File: data.txt
Content: Hello world

User Input:
This is appended text.

Sample Output:
File updated successfully with appended text.

Updated File Content:
Hello world
This is appended text.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
