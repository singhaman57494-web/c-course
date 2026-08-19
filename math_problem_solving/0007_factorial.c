//             factorial (1! to 13!)
# include <stdio.h>

int main ()
{
    int n;

    printf("enter num : ");
    scanf("%d", &n);

    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}

//                             long long method factorial (1! to 20!)

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    long long int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%lld", fact);
    return 0;
}