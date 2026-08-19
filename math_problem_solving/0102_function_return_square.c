//                             return square using function

#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n = 5;

    int ans = square(n);
    printf("square is : %d", ans);

    return 0;
}