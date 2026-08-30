//                          recursive function to reverse a positive integer.

#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + (n % 10));
}

int main(void)
{
    int n;

    printf("enter n number : ");
    scanf("%d", &n);

    printf("reverse is %d\n", reverse(n, 0));

    return 0;
}