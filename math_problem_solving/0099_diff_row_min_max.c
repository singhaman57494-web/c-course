//                                 min and max difference any row of matrix

#include <stdio.h>

int main()
{
    int user[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter number : ");
            scanf("%d", &user[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int min = user[i][0];
        int max = user[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (user[i][j] < min)
            {
                min = user[i][j];
            }
            if (user[i][j] > max)
            {
                max = user[i][j];
            }
        }
        int difference = max - min;
        printf("line %d max is : %d\n", i + 1, difference);
    }

    return 0;
}