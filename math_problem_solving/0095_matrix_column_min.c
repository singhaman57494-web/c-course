//                              column's minimum in matrix

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

    for (int j = 0; j < 3; j++)
    {
        int min = user[0][j];
        for (int i = 1; i < 3; i++)
        {
            if (user[i][j] < min)
            {
                min = user[i][j];
            }
        }
        printf("Column %d minimum is : %d\n", j + 1, min);
    }

    return 0;
}