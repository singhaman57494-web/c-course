//                                  krishnamurthy number revision 

#include <stdio.h>


int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    int original = num;

    int sum = 0;
    for(int i = num; i > 0; i /= 10)
    {
        int digit = i % 10;
        int fact = 1;
        for(int j = 1; j <= digit; j++)
        {
            fact *= j;
        }
        sum = sum + fact;
    }
    if(sum == original)
    {
        printf("krishnamurthy number");
    }
    else
    {
        printf("not krishnamurthy number");
    }
    return 0;
}