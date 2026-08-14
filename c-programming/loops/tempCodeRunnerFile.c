# include <stdio.h>

int main ()
{
    int n = 1;

    int sum = 0;
    do
    {
        sum = sum + n;
        n++;
    }while(n <= 5);
    printf("%d\n", sum);
    return 0;
}