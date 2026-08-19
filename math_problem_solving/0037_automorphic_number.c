//                             automorphic number revision in c

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;

    int square = original * original;

    int count = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        count++;
    }

    int power = 1;
    for(int j = 1; j <= count; j++)
    {
        power = power * 10;
    }

    int result = square % power;

    if(result == original)
    {
        printf("automorphic number");
    }
    else
    {
        printf("not automorphic number");
    }
    return 0;
}
