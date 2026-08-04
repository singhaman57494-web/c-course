//                          ternary operator in c (? :)
/*
The ternary operator is a conditional operator in C that serves as a one-line shortcut for a simple if-else statement. It evaluates a condition and returns one of two values based on whether the condition is true or false.

. ? -> checks if the condition is true.
. : -> exexutes if the condition is false.
*/


# include <stdio.h>

int main ()
{
    int a = 10;
    int b = 20;

    int max = (a > b)? a : b;

    printf("number is big : %d", max);
    return 0;
}
