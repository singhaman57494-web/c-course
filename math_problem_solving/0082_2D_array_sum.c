//                                   sum of 2D array

#include <stdio.h>


int main()
{
    int matrix[3][4];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("enter the number : ");
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalsum = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
        totalsum += sum;
    }
    printf("sum is matrix : %d\n", totalsum);
    
    return 0;
}