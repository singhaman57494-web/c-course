//                                    average of array in c

#include <stdio.h>


int main()
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter value :");
        scanf("%d", &n[i]);
    }
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + n[i];
    }

    float average =(float) sum / 10;
    printf("the average is : %.2f", average);
    
    
    return 0;
}