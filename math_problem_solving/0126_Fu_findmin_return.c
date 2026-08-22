//                          return minimum in array using function

#include <stdio.h>

int find_min(int arr[], int n)
{
    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = find_min(arr, n);
    printf("%d", ans);

    return 0;
}