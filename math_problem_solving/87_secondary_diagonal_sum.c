//                     secondary diagonal sum

#include <stdio.h>


int main()
{
    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the num : ");
            scanf("%d", &mat[i][j]);
        }
        
    }

    int sum = 0;

    for (int j = 0; j < 3; j++)
    {
        sum += mat[j][2 - j];
    }
    printf("the sum of secondary diagonal sum = %d\n", sum);

    return 0;
}