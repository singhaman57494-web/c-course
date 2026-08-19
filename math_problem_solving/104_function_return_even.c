//           function return even or not 


#include <stdio.h>

int isEven(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int ans = isEven(n);
    if(ans == 1)
    {
        printf("even");
    }
    else
    {
        printf("not even");
    }

    return 0;
}