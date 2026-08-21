//                              return gcd using function

#include <stdio.h>

int gcd(int num1, int num2)
{
    int gcd = 0;
    int min = 0;
    if(num1 > num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }
    for (int i = 1; i <= min; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
    
}

int main()
{
    int num1, num2;
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);

    int ans = gcd(num1, num2);
    printf("gcd : %d\n", ans);

    return 0;
}