//               find the longest consecctive increasing streak

#include <stdio.h>


int main()
{
    int user[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &user[i]);
    }

    int currentstreak = 1;
    int maxstreak = 0;

    for (int i = 1; i < 10; i++)
    {
        if(user[i] > user[i - 1])
        {
            currentstreak++;
        }
        else
        {
            currentstreak = 1;
        }
        if(currentstreak > maxstreak)
        {
            maxstreak = currentstreak;
        }
    }
    printf("maxstreak = %d", maxstreak);
    
    
    return 0;
}