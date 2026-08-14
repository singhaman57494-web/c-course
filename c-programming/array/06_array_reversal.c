//                                array  reversal using function

#include <stdio.h>

void arrayrev(int agg1[])
{
    for(int i = 0; i < 7 / 2 ; i++)
    {
        int temp;
        temp = agg1[i];
        agg1[i] = agg1[6 - i];
        agg1[6 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    arrayrev(arr);
    for(int i = 0; i < 7; i++)
        printf("%d ", arr[i]);

    return 0;
}