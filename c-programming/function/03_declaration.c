//                          function declaration in c

#include <stdio.h>
int sum(int a , int b);

int main ()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a,b);
    printf("sum =%d", c);
    return 0;
}

int sum(int a , int b)
{
    return a + b ;
}