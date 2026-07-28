//              check happy number in c 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number :");
    scanf("%d", &n);

    int visited[1000] = {0};

    while(n != 1)
    {
        if(visited[n] == 1)
        {
            printf("not happy number");
            return 0;
        }
        visited[n] = 1;

        int sum = 0;

        for(int i = n; i > 0; i = i / 10)
        {
            int digits = i % 10;

            sum = sum + digits * digits;
        }
        n = sum;
    }

    printf("happy number");

    return 0;
}