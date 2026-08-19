//                                          2D Array row sum and column sum

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
        int rowsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowsum = rowsum + user[i][j];
        }
        printf("%d row sum is : %d\n", i + 1, rowsum);
    }

    for (int j = 0; j < 3; j++)
    {
        int columnsum = 0;
        for (int i = 0; i < 3; i++)
        {
            columnsum = columnsum + user[i][j];
        }
        printf("%d column sum is : %d\n", j + 1, columnsum);
    }

    return 0;
}