//                                calculate sum of n number using recursion

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0; // base case
    
    return n + sum(n - 1); // recursive case
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int ans = sum(n);
    printf("the sum of n number : %d", ans);

    return 0;
}