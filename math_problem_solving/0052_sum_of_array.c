//                       sum of array in c 

#include <stdio.h>


int main()
{
    int num[10];

    for (int  i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + num[i];
    }
    printf("sum of number is :%d\n", sum);
    
    return 0;
}