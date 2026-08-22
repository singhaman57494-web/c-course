//                                  return armstrong number using function

#include <stdio.h>

int isarmstrong(int n)
{
    int power = 0;
    int sum = 0;
    for(int i = n; i > 0; i /= 10)
    {
        int digit = i % 10;
        power = digit * digit * digit;
        sum += power;
    }
    if(sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("enter the numbers : ");
    scanf("%d", &n);
    
    printf("%d", isarmstrong(n));

    return 0;
}