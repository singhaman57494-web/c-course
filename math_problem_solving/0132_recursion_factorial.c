//                          calculate factorial of n number 

#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    printf("factorial of n number : %d\n", factorial(num));

    return 0;
}