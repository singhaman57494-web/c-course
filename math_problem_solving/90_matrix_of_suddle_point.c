//                             matrix in suddle point

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
        for (int j = 0; j < 3; j++)
        {

            // minimum of row 
            int min = matrix[i][0];
            for (int k = 1; k < 3; k++)
            {
                 if(matrix[i][k] < min)
                 {
                    min = matrix[i][k];
                 }
            }
            
            // maximum of column
            int max = matrix[0][j];
            for (int k = 1; k < 3; k++)
            {
                if (matrix[k][j] > max)
                {
                    max = matrix[k][j];
                }
            }
            // condidate check
            if (matrix[i][j] == min && matrix[i][j] == max)
            {
                printf("saddle point : %d\n", matrix[i][j]);
            }
            
        }
    }

    return 0;
}