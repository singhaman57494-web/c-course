//                             return factors of n number using function

#include <stdio.h>

int count_factors(int n)
{
    int factors = 1;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            factors++;
        }
    }
    return factors;
}

int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    printf("factors : %d", count_factors(num));

    return 0;
}