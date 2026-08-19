//                            reverse an array using loop

#include <stdio.h>


int main()
{
    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &nums[i]);

    }

    for(int i = 9; i >= 0; i--)
    {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}