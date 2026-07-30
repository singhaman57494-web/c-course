//                          neon number revision in c

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;
    int square = original * original ;

    int sum = 0;
    while(square > 0)
    {
        sum += square % 10;
        square /= 10;
    }
    char *result = (sum == original) ? "neon number " : "not neon";
    printf("%s", result);
    return 0;
}