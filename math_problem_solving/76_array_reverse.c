//                                    array reverse swap method

#include <stdio.h>

int main()
{
    int list[8];

    for (int i = 0; i < 8; i++)
    {
        printf("enter the number : ");
        scanf("%d", &list[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        int temp;
        temp = list[i];
        list[i] = list[7 - i];
        list[7 - i] = temp;
    }
    for (int j = 0; j < 8; j++)
    {
        printf("%d ", list[j]);
    }

    return 0;
}