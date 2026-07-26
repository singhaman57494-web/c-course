//                              harshad number 

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    if (original % sum == 0)
        printf("%d is a Harshad number.\n", original);
    else
        printf("%d is not a Harshad number.\n", original);

    return 0;
    
}