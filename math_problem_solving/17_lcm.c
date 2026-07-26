//                least common multiple

# include <stdio.h>

int main ()
{
    int num1 ;
    int  num2;
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number :");
    scanf("%d", &num2);

    int limit;
    if(num1 < num2)
    {
        limit = num1;
    }
    else
    {
        limit = num2;
    }

    int gcd = 0;
    
    for(int i = 1;i <= limit; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    long long lcm = (num1 * num2)/gcd;
    printf("lcm = %d", lcm);
    return 0;
}