/*
Q124: Take two filenames from the user – a source file and
a destination file. Copy all content using fgetc() and fputc().

Sample Input:
Source File: source.txt
Content: Learning C File Handling

Destination File: destination.txt

Sample Output:
File copied successfully to destination.txt

Destination File Content:
Learning C File Handling
*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[50], destinationName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file not found.");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL)
    {
        printf("Destination file could not be created.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationName);

    return 0;
}