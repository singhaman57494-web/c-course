//                               sum of positive digit using recursion

#include <stdio.h>

int digitsum(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + digitsum(n / 10); 
}

int main()
{
    int numbers;
    do
    {
    
    printf("enter the numbers : ");
    scanf("%d", &numbers);
    }while(numbers <= 0);

    printf("the sum of positive number : %d\n", digitsum(numbers));

    return 0;
}