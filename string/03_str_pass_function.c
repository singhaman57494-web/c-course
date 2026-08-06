//                       string passing function in c

#include <stdio.h>

void printstr(char str[])
{
    int i= 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    char str[] = "harry";
    printstr(str);
    return 0;
}