# include <stdio.h>
/*
. arithmetic operators : 
OPERATOR    |        DESCRIPTION
            |
+           |         addition     2 + 2 = 4
-           |        subtraction   2 - 1 = 3
*           |        multiplication 3 * 3 = 9
/           |        devision       4 / 2 = 2
%           |        modulus        8 % 2 = 0

*/  
int main ()
{
    int a = 34;
    float b =  6.34;
    printf("%f\n", a + b);
    printf("%f\n", a - b);
    printf("%f\n", a * b);
    printf("%f\n", a / b);
    /* modulus requires integral operands - cast b to int */
    printf("%d\n", a % (int)b);

    return 0;
}