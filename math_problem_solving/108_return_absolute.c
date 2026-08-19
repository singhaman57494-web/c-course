//                    return absolute value n number

#include <stdio.h>

int absolute(int n)
{
    if(n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main()
{
    int n;
    printf("enter the value : ");
    scanf("%d", &n);

    int x = absolute(n);

    printf("absolute value = %d\n", x);
    return 0;
}