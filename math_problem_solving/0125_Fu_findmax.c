//                           return max of array using function

#include <stdio.h>

int find_max(int arr[],int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter element : ");
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans =  find_max(arr, n);
    printf("max = %d\n", ans);
    
    return 0;
}