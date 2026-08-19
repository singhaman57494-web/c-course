//                         return sum of digits using function 

#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;
    for(; n > 0; n /= 10)
    {
        sum += (n % 10); 
    }
    return sum;
}
int main()
{
    int n;

    printf("enter the numbers : ");
    scanf("%d", &n);

    int sum = sumDigits(n);
    printf("sum of digits : %d\n", sum);


    return 0;
}