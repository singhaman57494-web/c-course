//                  array frequency count in c programming

#include <stdio.h>

int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }

    int visited[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        int count = 1;
        for (int k = i + 1; k < 10; k++)
        {
            if (num[k] == num[i])
            {
                count++;
                visited[k] = 1;
            }
        }
        if (count >= 1)
        {
            printf("%d appears %d times\n", num[i], count);
        }
    }

    return 0;
}