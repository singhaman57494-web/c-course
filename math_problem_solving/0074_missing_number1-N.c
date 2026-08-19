//                       find missing number in array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 6, 8, 9, 10};

    int total_sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        total_sum = total_sum + i;
    }

    int arr_sum = 0;
    for (int j = 0; j < 9; j++)
    {
        arr_sum = arr_sum + arr[j];
    }

    int missing = total_sum - arr_sum;
    printf("missing element is : %d\n", missing);

    return 0;
}