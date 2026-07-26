//                 reverse number 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the numbers : ");
    scanf("%d", &n);

    int reverse = 0;

    for(int i = n; i > 0; i = i / 10)
    {
        reverse = reverse * 10 +(i % 10);
    }
    printf("%d",reverse);
    return 0;
}