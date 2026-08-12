//                                    largest element and position in matrix

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

    int max = matrix[0][0];
    int maxrow = 0;
    int maxclm = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
                maxrow = i;
                maxclm = j;
            }
        }
        
    }
    printf("Max is : %d\nRow is : %d\ncolumn is : %d\n", max , maxrow + 1, maxclm + 1 );
    
    
    return 0;
}