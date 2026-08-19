//                        column wise maximum

#include <stdio.h>

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the number : ");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < 4; j++)
    {
        int max = arr[0][j];
        for (int i = 1; i < 3; i++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        printf("%d column is max :%d\n", j + 1, max);
    }

    return 0;
}