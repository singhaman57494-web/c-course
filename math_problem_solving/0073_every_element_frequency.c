//                                      frequency of every element

#include <stdio.h>

int main()
{
    int user[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the element : ");
        scanf("%d", &user[i]);
    }

    int visited[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if(user[j] == user[i])
            {
            count++;
            visited[j] = 1;
            }
        }
        printf("%d -> appears %d times\n", user[i], count);
        
    }

    return 0;
}