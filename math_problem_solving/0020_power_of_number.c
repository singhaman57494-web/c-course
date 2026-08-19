//            power of number

# include <stdio.h>

int main ()
{
    int a;
    int b;

    printf("enter first num : ");
    scanf("%d", &a);
    printf("enter second num : ");
    scanf("%d", &b);

    long long int result = 1;

    for(int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    printf("%lld", result);
    return 0;
}