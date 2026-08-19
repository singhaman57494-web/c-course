//              function return max number in 3 numbers

#include <stdio.h>

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a = 92, b = 84, c = 55;

    printf("max value is : %d\n", maximum(a, b, c));

    return 0;
}