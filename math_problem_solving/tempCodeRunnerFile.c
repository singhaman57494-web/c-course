
# include <stdio.h>

int main ()
{
    int n;

    printf("enter the digits : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        sum = sum + (i % 10);
    }
    printf("%d", sum);
    return 0;
}
