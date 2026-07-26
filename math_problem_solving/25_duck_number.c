//                   duck number

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the numbers : ");
    scanf("%d", &n);

    int flag = 0;
    int digit = 1;
    while(n > 0)
    {
        digit = n % 10;
        if(digit == 0)
        {
            flag = 1;
            break;
        }
        
        n = n / 10;
    }
    if(flag == 1)
    {
        printf("duck number");
    }
    else
    {
        printf("not duck");
    }
    return 0;
}