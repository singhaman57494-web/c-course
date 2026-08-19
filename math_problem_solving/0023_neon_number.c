//           check neon number

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;
    int square = n * n;

    int sum = 0;
    while(square > 0)
    {
        sum += square % 10;
        square /= 10;
    }
    if(sum == original)
    {
        printf("neon number");
    }
    else
    {
        printf("not neon number ");
    }
    return 0;
}