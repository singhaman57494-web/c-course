//                         2D array input and print

#include <stdio.h>

int main()
{
    int user[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number : ");
            scanf("%d", &user[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", user[i][j]);
        }
        printf("\n");
    }

    return 0;
}