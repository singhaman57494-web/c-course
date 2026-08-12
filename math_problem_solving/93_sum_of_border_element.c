//                              border elements sum of matrix

#include <stdio.h>



int main()
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the number : ");
            scanf("%d", & matrix[i][j]);
        }
        
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i == 0 || i == 2 ||j == 0 || j == 2)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("the sum is : %d\n", sum);
    return 0;

}