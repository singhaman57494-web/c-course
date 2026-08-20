#include <stdio.h>
#include <string.h>

void parser(char *html)
{
    int i = 0;
    int len = strlen(html);

    while (i < len)
    {
        if (html[i] == '<')
        {
            int j = i + 1;
            while (j < len && html[j] != '>')
            {
                j++;
            }

            if (j < len)
            {
                printf("Tag: %.*s\n", j - i + 1, &html[i]);
                i = j + 1;
            }
            else
            {
                break;
            }
        }
        else
        {
            int j = i;
            while (j < len && html[j] != '<')
            {
                j++;
            }

            if (j > i)
            {
                printf("Text: %.*s\n", j - i, &html[i]);
            }

            i = j;
        }
    }
}

int main()
{
    char string[] = "<h1> this is a heading </h1>";
    parser(string);
    return 0;
}