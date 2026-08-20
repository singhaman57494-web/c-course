//             count odd number return using function

#include <stdio.h>

int countOdd(int n)
{
    int count = 0;
    for(int i = n; i > 0; i /= 10)
    {
        if((i % 10) % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("enter the numbers : ");
    scanf("%d", &n);

    int count = countOdd(n);
    printf("odd number is : %d\n", count);

    return 0;
}