//                                return perfect square using function

#include <stdio.h>

int perfect_square(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            return 1;
        }
    }

    return 0;
}
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printf("%d", perfect_square(n));

    return 0;
}