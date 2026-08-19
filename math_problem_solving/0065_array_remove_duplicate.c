//                     remove duplicate value in array

#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        int flag = 0;
        for (int k = 0; k < j; k++)
        {
            if (arr[j] == arr[k])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", arr[j]);
        }
    }

    return 0;
}