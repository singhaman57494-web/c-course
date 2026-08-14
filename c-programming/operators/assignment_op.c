#include <stdio.h>

/*

.assignment operator in c

    operator       |                           descripition
      =            | simple assignment operator. assigns values from right side
                   | operands to left side operand.
                   |
     +=            | add AND assignment operator. it adds the right operand
                   | to the left operand an assign the result to the left
                   | operand.
                   |
     -=            | subtrand AND assignment operator. it subtracts the right
                   | operand from the left operand and the result is assigned
                   | to the left operand.
                   |
     *=            |multiply AND assignment operator. it multiplies the right
                   |operand with the left operand and the result is assign to
                   |the the left operand.
                   |
    /=             |devide AND assignment operator. it devides the left operand
                   |with the right operand and the result is assigned to the left
                   | operand  */

//                 = operator

#include <stdio.h>

int main()
{
    int a = 10;
    printf("value of a = %d\n", a);
    return 0;
}

//                     +=   operator

#include <stdio.h>

int main()
{
    int x = 10;

    x += 5;
    printf("x += 5 = %d\n", x);
    return 0;
}

//                      -=     operator

#include <stdio.h>

int main()
{
    int x = 10;

    x -= 3;
    printf("x -= 3 = %d\n", x);
    return 0;
}

//                       *=      operator

#include <stdio.h>
int main()
{
    int x = 10;

    x *= 2;
    printf("x *= 2 = %d\n", x);

    return 0;
}

//                          /=      operator

#include <stdio.h>
int main()
{
    int num = 10;
    num /= 4;
    printf("x /= 4 = %d\n", num);
    return 0;
}
//                          %=        operator


#include <stdio.h>
int main()
{
    int a = 10;
    a %= 4;

    printf("x %%= 4 = %d\n", a);
    return 0;
}