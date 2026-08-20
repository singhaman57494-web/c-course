//                                return reverse number using function 

#include <stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;
    for (int i = n; i > 0; i /= 10)
    {
        reverse = reverse * 10 +(i % 10); 
    }
    return reverse;
    
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int ans = reverseNumber(n);
    printf("%d ", ans);

    return 0;
}