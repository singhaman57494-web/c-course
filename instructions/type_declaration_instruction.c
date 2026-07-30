//                    type declaration instruction
//  (declare variable before using it.)
# include <stdio.h>

// VALID
int main ()
{
    int a = 20;
    int b = a;
    int c = b + 1;
    int d = 1 , e;
    a = b = c = 1;
    printf("%d", c);

    return 0;
}

// INVALID
#include <stdio.h>

int main ()
{
    int a = 22;
    int b = a;
    int c = b + 2;
    int d = 2, e;

    int a, b, c = 1;

    printf("%d", d);
    return 0;
}
