//File se characters, vowels, consonants aur spaces count

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == ' ')
        {
            spaces++;
        }
        else if(ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    fclose(fp);

    printf("Characters = %d\n", characters);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Spaces = %d\n", spaces);

    return 0;
}