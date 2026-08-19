//                         count even and odd number in an array

#include <stdio.h>


int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }
    int even = 0;
    for(int j = 0; j < 10; j++)
    {
        if(arr[j] % 2 == 0)
        {
            even++;
        }
    }
    printf("even = %d", even);
    int odd = 0;
    for(int k = 0; k < 10; k++)
    {
        if(arr[k] % 2 != 0)
        {
            odd++;
        }
    }
    printf("\nodd= %d", odd);

    return 0;
}