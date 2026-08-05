//                          second largest element in an array

#include <stdio.h>


int main()
{
    int num[8];

    for(int i = 0; i < 8; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }
    int largest = num[0];
    int seclargest = num[0];
    for (int j = 0; j < 8; j++)
    {
        if(largest < num[j])
        {
            largest = num[j];
        }
        else if (num[j] < largest && num[j] > seclargest)
        {
            seclargest = num[j];
        }
    }
    printf("largest =%d\n", largest);
    printf("second largest =%d\n", seclargest);
    
    return 0;

}