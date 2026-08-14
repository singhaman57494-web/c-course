# include <stdio.h>
/*
.BITWISE OPERATORs
    A     |       b        |      A & B     |    A | B     |    A ^ B   |
          |                |                |              |            |
    0     |       0        |        0       |        0     |      0     |
    0     |       1        |        0       |        1     |      1     |
    1     |       1        |        1       |        1     |      0     |
    1     |       0        |        0       |        1     |      1     |*/

int main ()
{
    int a , b;
    a = 2;
    b = 3;

    printf("%d", a&b);
    return 0;
}