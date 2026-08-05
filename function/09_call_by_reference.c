//                                 call  by reference
/*
1. the call by reference method of passing arguments to a c function copies the address of the arguments into 
   into the formal parameters.

2. address of the actual arguments are copies and them assigned to the corresponding formal arguments.
*/


#include <stdio.h>

void changevalue(int* x, int *y)
{
    int temp;
    temp = *x; // save the value at sddress x
    *x = *x + *y;  
    *y = temp - *y;
}

int main()
{
    int a = 54, b = 46;
    printf("the value of a now this %d %d\n", a , b);
    changevalue(&a, &b);
    printf("the value of a now this %d %d\n", a , b);

    return 0;
}