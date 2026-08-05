//                        find the largest and smallest element together

#include <stdio.h>


int main()
{
    int user[10];

    for(int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }
    int min = user[0];
    int max = user[0];

    for(int j = 1; j < 10; j++)
    {
        if(user[j] < min)
        {
            min = user[j];
        }
        else if(user[j] > max)
        {
            max = user[j];
        }
    }
    printf("min = %d\n", min);
    printf("max = %d\n", max);
    
    return 0;
}