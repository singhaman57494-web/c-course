//            return count digits in numbers using function


#include <stdio.h>

int countDigits(int n)
{
    int count = 0;
    for (; n > 0; n /= 10)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int count = countDigits(n);
    printf("%d\n", count);

    return 0;
}