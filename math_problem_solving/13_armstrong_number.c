//                  armstrong number print 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the digits : ");
    scanf("%d", &n);

    int original = n;

    int sum = 0;

    for(int i = n; i > 0; i = i / 10)
    {
        int digit = i % 10;
        int cube = (digit * digit * digit);
        sum = sum + (cube);
    }
    if(sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not Armstrong");
    }
    
    return 0;
}