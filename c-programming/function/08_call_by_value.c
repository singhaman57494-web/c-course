//                            call by value

/*
1. when we call function by value . it means that we are passing the value of arguments which are copied into the formal parametersof the function.

2. which means that the original value remain unchanged and only the parameters inside the function changes.

*/

#include <stdio.h>

int subtract(int a , int b) // actual parameters
{
    return a-b;
}

int main()
{
    int a = 44;
    int b = 14;

    printf("%d\n", subtract(a, b)); // passing arguments
    
    return 0;
}