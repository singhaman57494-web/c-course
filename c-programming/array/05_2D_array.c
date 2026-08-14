//                   2D array in c programming

#include <stdio.h>

int main()
{
    int nums[2][4] = {{23, 44, 56, 88}, {32, 86, 52, 88}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}