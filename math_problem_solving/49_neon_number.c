//                     neon number revisin
//    example:- 0,1,9

#include <stdio.h>


int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int original = n;

    int square = n * n;
    int sum = 0;
    for(int i = square; i > 0; i /=10)
    {
        sum = sum + (i % 10);
    }
    char *ans = (original == sum)? "neon number": "not neon";
    printf("%s", ans);

    return 0;

}