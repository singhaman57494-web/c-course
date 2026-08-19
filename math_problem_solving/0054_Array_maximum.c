//                     muximum element of array

#include <stdio.h>


int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("maximum =%d\n", max);

    return 0;
}