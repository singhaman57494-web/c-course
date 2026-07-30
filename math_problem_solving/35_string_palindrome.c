//                 string palindrome revision in c

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("enter the name : ");
    scanf("%s", name);

    int len = strlen(name);

    int flag = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (name[i] != name[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}

//               question 2 revision
#include <stdio.h>
#include <string.h>

int main()
{
    char name[70];

    printf("enter the name : ");
    scanf("%s", name);

    int len = strlen(name);

    int flag = 1;
    for (int i = 0; i = len / 2; i++)
    {
        if (name[i] != name[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("polindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}