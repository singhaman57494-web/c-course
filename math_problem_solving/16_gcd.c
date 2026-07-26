//           Greatest common divisor

# include <stdio.h>

int main ()
{
    int num1;
    int num2;
    printf("enter a number : ");
    scanf("%d", &num1);
    printf("enter b number : ");
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

    for(int i = 1; i <= limit; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("%d", gcd);
    return 0;
}