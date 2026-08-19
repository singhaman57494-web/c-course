//                                 count the value positive negative and zero in matrix

#include <stdio.h>


int main()
{
    int nums [3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the number : ");
            scanf("%d", &nums[i][j]);
        }
        
    }
    int negative = 0;
    int positive = 0;
    int zero = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(nums[i][j] > 0)
            {
                positive++;
            }
            else if (nums[i][j] < 0)
            {
                negative++;
            }
            else
            {
                zero++;
            }
        }
        
    }
    printf("the negitive value is this table : %d\n", negative);
    printf("the positive value is this table : %d\n", positive);
    printf("the zero value is this table : %d\n", zero);
    
    
    return 0;
}