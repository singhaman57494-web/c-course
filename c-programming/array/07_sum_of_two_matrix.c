//                         sum of two matrix

#include <stdio.h>

int main()
{
    int user1[3][3], user2[3][3], sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter mat1 number : ");
            scanf("%d", &user1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", user1[i][j]);
        }
        printf("\n");
    }

    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("enter mat2 number : ");
            scanf("%d", &user2[k][l]);
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d ", user2[k][l]);
        }
        printf("\n");
    }
    printf("\n");

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            sum[x][y] = user1[x][y] + user2[x][y];
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d ", sum[x][y]);
        }
        printf("\n");
    }

    return 0;
}