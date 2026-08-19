//                          spy number in c language revision

#include <stdio.h>

int main ()
{
    int n;

    printf("enter the numbers : ");
    scanf("%d", &n);

    int sum = 0;
    int product = 1;

    for(int i = n; i > 0; i = i / 10)
    {
        int digit = i % 10;
        sum = sum + digit;
        product = product * digit;
    }
    char *result = (sum == product)? "spy number":"not spy";
    printf("%s", result);
    return 0;
}
