//                          array intersection in c programming

#include <stdio.h>

int main()
{
    int arr1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter arr1 element : ");
        scanf("%d", &arr1[i]);
    }
    int arr2[5];
    for (int j = 0; j < 5; j++)
    {
        printf("enter arr2 element : ");
        scanf("%d", &arr2[j]);
    }

    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}