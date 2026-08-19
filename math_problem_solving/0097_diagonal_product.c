//                           product of diagonal elements in matrix

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
    int product = 1;

    for (int i = 0; i < 3; i++)
    {
        product *= matrix[i][i];
    }
    printf("the product is : %d\n", product);
    
    
    
    return 0;
}