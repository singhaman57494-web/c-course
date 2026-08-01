//                               fascinating number int c
//                   input: 192

#include <stdio.h>

int main()
{
    int num;

    printf("enter the numbers : ");
    scanf("%d", &num);

    int n = num;

    int dublenum = 2 * n;
    int triplenum = 3 * n;

    int visited[10] = {0};

    for (int i = n; i > 0; i /= 10)
    {
        int digit = i % 10;
        visited[digit]++;
    }
    for (int j = dublenum; j > 0; j /= 10)
    {
        int digit = j % 10;
        visited[digit]++;
    }
    for (int k = triplenum; k > 0; k /= 10)
    {
        int digit = k % 10;
        visited[digit]++;
    }
    if (visited[0] != 0)
    {
        printf("not fascinating");
        return 0;
    }

    int flag = 1;
    for (int i = 1; i <= 9; i++)
    {

        if (visited[i] != 1)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("not fascinating");
    }
    else
    {
        printf("fascinating number");
    }

    return 0;
}