//                                      power of a number 

#include <stdio.h>

int power(int n, int num)
{
    int result = 1;
    for(int i = 1; i <= num;i++)
    {
        result *= n;
    }
    return result;

}

int main()
{
    int n, num;
    printf("enter base : ");
    scanf("%d", &n);
    
    printf("enter exponent : ");
    scanf("%d", &num);

    int ans = power(n, num);
    printf("%d ", ans);

    return 0;
}