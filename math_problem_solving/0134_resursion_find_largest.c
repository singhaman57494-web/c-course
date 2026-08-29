//                       find the largest number in n value

#include <stdio.h>

int largest(int num[], int n)
{
    if (n == 1)
        return num[0];

    int max = largest(num, n - 1);
    return (num[n - 1] > max) ? num[n - 1] : max;
}

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }

    printf("the largest number is : %d\n", largest(num, 5));

    return 0;
}