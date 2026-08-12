//                     minimum of every row

#include <stdio.h>

int main()
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number : ");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int min = matrix[i][0];
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
        printf("Row %d min is : %d\n", i + 1, min);
    }

    return 0;
}