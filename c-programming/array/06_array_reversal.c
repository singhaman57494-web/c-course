//                                array  reversal using function

#include <stdio.h>

void arrayrev(int n, int agg1[])
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = agg1[i];
        agg1[i] = agg1[n - 1 - i];
        agg1[n - 1 - i] = temp;
    }
}
int main()
{
     int n;
    printf("enter n number : ");
    scanf("%d", &n);

    int arr[8];

    for (int i = 0; i < n; i++)
    {
        printf("enter the num : ");
        scanf("%d", &arr[i]);
    }
    arrayrev(n, arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}