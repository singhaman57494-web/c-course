//                   spy number

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    int product = 1;

    for(int i = n; i > 0; i = i / 10)
    {
        int digit = i % 10;
        sum = sum + digit;
        product = product * digit;
    }
    if(sum == product)
    {
        printf("spy number ");
    }
    else
    {
        printf("not spy ");
    }
    return 0;
}