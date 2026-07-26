//                          trimorphic number

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;
    int cube = original * original * original;

    int count = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        count++;
    }
    int power = 1;
    for(int j = 1; j <= count; j++)
    {
        power = power * 10;
    }
    int result = cube % power;

    if(result == original)
    {
        printf("trimorphic");
    }
    else
    {
        printf("not trimorpic");
    }
    
    return 0;
}
