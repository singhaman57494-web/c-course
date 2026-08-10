//                        maxium element of row

#include <stdio.h>
#include <string.h>


int main()
{
    int user[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the number : ");
            scanf("%d", &user[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        int max = user[i][0];
        for (int j = 1; j < 4; j++)
        {
            if (max < user[i][j])
                max = user[i][j];
        }
        printf("row %d max is : %d\n", i + 1, max);
    }
    
    return 0;
}