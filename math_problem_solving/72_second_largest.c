//                    second largest revision

#include <stdio.h>


int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondlargest = arr[0];
    
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    printf("largest is : %d\n", largest);
    printf("second largest is : %d\n", secondlargest);
    
    return 0;
}