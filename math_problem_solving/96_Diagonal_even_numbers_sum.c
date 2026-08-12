//                    sum of main diagonal even number

#include <stdio.h>


int main()
{
    int mat[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number : ");
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        if(mat[i][i] % 2 == 0)
            sum += mat[i][i];
    }
    printf("the sum of main diagonal is : %d\n", sum);

    return 0;
}