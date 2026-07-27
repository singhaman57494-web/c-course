//              check happy number in c 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number :");
    scanf("%d", &n);

    int original = n;

    while(n != 1)
    {
        int sum = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        int digits = i % 10;

        sum = sum + digits * digits;
    }
    n = sum;
    }
    if(n == 1)
    {
        printf("happy number");
    }
    else
    {
        printf("not happy");
    }

    return 0;
}