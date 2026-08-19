//            Automorphic nimber 
# include <stdio.h>

int main ()
{
    int n;
    
    printf("enter number : ");
    scanf("%d", &n);
    int original = n;

    int square = original * original;
    int count = 0;
    for(int i = n; i > 1; i = i / 10)
    {
        count++;
    }
    int power = 1;
    for(int i  = 1; i <= count; i++)
    {
        power = power * 10;
    }
    int result = square % power;

    if(result == original)
    {
        printf("automorphc");
    }
    else
    {
        printf("not automorphc");
    }
    return 0;
}