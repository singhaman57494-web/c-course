//                         count even and odd value matrix

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

    int even = 0;
    int odd = 0;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        
    }
    printf("even number is : %d\n", even);
    printf("odd number is : %d\n", odd);
    

    return 0;
}