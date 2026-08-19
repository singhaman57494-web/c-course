//               peterson number

# include <stdio.h>

int main ()
{
    int n;
    
    printf("enter the number :");
    scanf("%d", &n);
    int original = n;

    int sum = 0;

    for(int i = n; i > 0; i = i / 10)
    {
        int digit = i % 10;

        int fact = 1;
        for(int j = 1; j <= digit; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    if(sum == original)
    {
        printf("peterson number");
    }
    else
    {
        printf("not peterson number");
    }
    return 0;
}