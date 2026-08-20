//               formal argument in c programming

/*
1. these variables are treated as local variables with-in a function.

2. these variables take presedence over global variables.
*/

#include <stdio.h>

int func(int b)
{
    printf("the address of b inside func1 is %d\n", &b);
    return b * 10;
}

int main()
{
    int b = 355;
    printf("the address of inside main is %d\n", &b);
    int val = func(b);
    int *ptr = & val;
    printf("The value of func1 is %d\n", val);

    return 0;
}