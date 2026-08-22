//                            function using prime number 

#include <stdio.h>

int isprime(int n)
{
    if(n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n-1; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int ans = isprime(n);
    printf("Result = %d", ans);

    return 0;
}