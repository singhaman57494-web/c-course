//                        sort array in ascending order

#include <stdio.h>

int main()
{
    int user[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        for (int k = j + 1; k < 5; k++)
        {
            if (user[j] > user[k])
            {
                int temp;
                temp = user[j];
                user[j] = user[k];
                user[k] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", user[i]);
    }

    return 0;
}