//                                 find the maximum difference in array values

#include <stdio.h>


int main()
{
    int user[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }
     
    int minimum = user[0];
    int maxDiff = 0;

    for(int j = 0; j < 5; j++)
    {
        
        int difference = user[j] - minimum;
        
        if(difference > maxDiff)
        {
            maxDiff = difference;
        }
        if(minimum > user[j])
        {
            minimum = user[j];
        }
    }
    printf("%d", maxDiff);

    
    return 0;
}