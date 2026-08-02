//                               minimum element in array

#include <stdio.h>


int main()
{
    int n[7];

    for (int i = 0; i < 7; i++)
    {
        printf("enter the value : ");
        scanf("%d", &n[i]);
    }

    int min = n[0];

    for (int i = 0; i < 7; i++)
    {
        if(min > n[i])
        {
            min = n[i];
        }
    }
    printf("minimum = %d", min);
    
    return 0;
}