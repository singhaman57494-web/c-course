//                             mat is symmetric or not symmetric

#include <stdio.h>


int main()
{
    int number[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter number : ");
            scanf("%d", &number[i][j]);
        }
        
    }

    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(number[i][j] != number[j][i])
            {
                flag = 0;
            }
        }
        
    }
    char *result = (flag == 1)? "symmetric matrix": "not symmetric";
    printf("%s", result);
    
    return 0;
}