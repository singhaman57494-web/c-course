//                        arithmetic instruction

# include <stdio.h>

int main ()
{
    int a = 12;
    int b = 12;
    int c = a + b;
    // a = operand 1
    // + = operator
    // b = operand 2

    printf("%d", c);
    return 0;
}

// VALID
# include <stdio.h>

int main ()
{
    int a = 5;
    int b = 2;

    int c = b + c;
    int d = a * b;
    int e = b / c;

    printf("%d", c);
}



// INVALID

# include <stdio.h>

int main ()
{
    int a = 3;
    int b = 5;

    // int b + c = a;
    // int a = bc;
    // int a = b^c;
}