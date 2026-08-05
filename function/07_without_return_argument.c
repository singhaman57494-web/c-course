//                   without argument and without return function in c

#include <stdio.h>
void greet();  // function declaration.

int main ()
{
    greet(); // function call
    return 0;
}

void greet() //     function definition
{
    printf("hello, welcome to c programming\n");
}