//                 Harshad number revision using for loop

#include <stdio.h>

int main ()
{
    int n; 
    printf("enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = n; i > 0; i /= 10)
    {
        sum = sum +(i % 10);
    }
    if(n % sum == 0)
    {
        printf("harshad number");
    }
    else
    {
        printf("not harshad number");
    }
    return 0;
}