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

    for (int i = 0; i < 10; i++)
    {
        int visited[10] = {0};
        
        
            if (visited[i] == 1)
            {
                continue;
            }
        

        int count = 0;
        for (int k = 0; k < 10; k++)
        {
            if (num[k] == num[i])
            {
                count++;
                visited[k] = 1;
            }
        }
        printf("%d match is %d times\n", num[i], count);
    }

    return 0;
}