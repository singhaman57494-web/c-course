//                       array right rotation in c

#include <stdio.h>


int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }

    int temp = arr[4];

    for (int j = 4; j > 0; j--)
    {
        arr[j] = arr[j-1];
    }
    arr[0] = temp;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}