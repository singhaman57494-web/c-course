//                                       eturn factorial using function

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter n number : ");
    scanf("%d", &n);

    printf("factorial is : %d\n", factorial(n));

    return 0;
}