//                         disarium number in c

#include <stdio.h>

int main()
{
    int n;

    printf("enter the number :");
    scanf("%d", &n);

    int original = n;
    int count = 0;

    for(int i = n; i > 0; i = i / 10)
    {
        count++;
    }
    int position = count;
    int sum = 0;
    for(int j = n; j > 0; j = j/10)
    {
        int digit = j % 10;
        int result = 1;
        for(int k = 1; k <= position; k++)
        {
            result = result * digit;
        }
        sum = sum + result;
        position--;
    }
    if(original == sum)
    {
        printf("disarium number");
    }
    else
    {
        printf("not disarium number");
    }
    return 0;

}