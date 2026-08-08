//                              chack array sorted on ascending order

#include <stdio.h>

int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }

    int flag = 0;
    for (int j = 0; j < 9; j++)
    {
        if (num[j] > num[j + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("not sorted");
    }
    else
    {
        printf("sorted");
    }

    return 0;
}