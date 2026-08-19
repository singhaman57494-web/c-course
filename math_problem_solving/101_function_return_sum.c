//                      sum of two number using function

#include <stdio.h>

int add(int a, int b) // parameter
{
    return a + b;
}

int main()
{
    int a = 34, b = 26;

    int result = add(a, b); //function call,  argument -> a, b 
    printf("%d", result);

    return 0;
}