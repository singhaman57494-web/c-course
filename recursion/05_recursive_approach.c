//                      recursive approach in c programming
#include <stdio.h>

int fib_recursive(int n)
{
    
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main()
{
    int number;

    printf("enter the index to find fibonacci series : ");
    scanf("%d", &number);
    printf("the value of fibonacci number at position no %d using recursive approach %d\n", number, fib_recursive(number));

    return 0;
}