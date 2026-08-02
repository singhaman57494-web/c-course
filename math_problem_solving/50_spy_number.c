//                         spy number revision

//  elxample :- 1124 ,123

#include <stdio.h>


int main()
{
    int n;
    printf("enter the numbers : ");
    scanf("%d", &n);

    int sum = 0;
    int product = 1;
    for(int i = n; i > 0; i /= 10)
    {
        sum = sum + (i % 10);
        product = product *(i % 10);
    }
    char *result = (sum == product)? "spy number":"not spy";
    printf("%s", result);

    return 0;
    
}