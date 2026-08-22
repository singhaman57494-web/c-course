//                             find count positive number in array using function

#include <stdio.h>

int count_positive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans =count_positive(arr, n);
    printf("count is : %d", ans);
    
    return 0;
}