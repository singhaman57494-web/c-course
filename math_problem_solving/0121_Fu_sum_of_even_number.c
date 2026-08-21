//                          return sum of even number 1 to n using function

#include <stdio.h>

int sum_even(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    int answer = sum_even(num);
    printf("the sum of even number : %d\n", answer);
    return 0;
}