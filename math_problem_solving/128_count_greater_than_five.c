//                                count digit greater then 5 using function


#include <stdio.h>

int count_greaterThanFive(int n)
{
    int count = 0;
    for(; n > 0; n /= 10)
    {
        if(n % 10 > 5)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int ans =count_greaterThanFive(n);
    printf("count is : %d", ans);
    
    return 0;
}