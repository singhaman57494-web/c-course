//                         check arrey is polindrome or not polindrome

#include <stdio.h>

int main()
{
    int user[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }
    int flag = 0;

    for (int j = 0; j < 5 / 2; j++)
    {
        if (user[j] != user[4 - j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}