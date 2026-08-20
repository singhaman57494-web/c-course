//              global variable in c programming

/*
1. these are they variables defined outside the main method.

2. global variables are accessible throughout the entire program from any function.

3. if a local and global variable has the same name, the local variable will take preference.
*/

#include <stdio.h>

int b1 = 34;
int func1(int b)
{
    printf("the value of b is : %d\n", b1);
    return b * 10;
}
int main()
{
    int b = 344;

    int val = func1(b);
    int *ptr = &val;
    printf("the value of func1 is %d", val);

    return 0;
}