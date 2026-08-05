//                recusrion using factorial

#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int num;
    printf("enter the num : ");
    scanf("%d", &num);

    printf("the factorial of %d is %d\n", num, factorial(num));
}