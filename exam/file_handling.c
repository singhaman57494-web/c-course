#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}