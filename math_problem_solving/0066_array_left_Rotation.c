//                           array left rotation

#include <stdio.h>

int main()
{
    int user[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }

    int temp = user[0];
    for (int i = 0; i < 4; i++)
    {
        user[i] = user[i + 1];
    }
    user[4] = temp;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", user[i]);
    }

    return 0;
}