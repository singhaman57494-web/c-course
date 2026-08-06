//                           array merge two arrays in c

#include <stdio.h>

int main()
{
    int arr[5];
    int user[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }
    int result[10];
    for (int j = 0; j < 5; j++)
    {
        result[j] = arr[j] ;
    }
    for (int k = 0; k < 5; k++)
    {
        result[k + 5] = user[k];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}