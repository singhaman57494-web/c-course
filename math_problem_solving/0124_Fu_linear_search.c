//                             return linear search using function

#include <stdio.h>

int search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    printf("number not found");
    return -1;
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

    int target;
    printf("enter target : ");
    scanf("%d", &target);

    int ans = search(arr, n, target);
    if (ans >= 0)
    {
        printf("found the number is : %d\n", ans);
    }

    return 0;
}