//                  duck number revision in c 

#include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int flag = 0;

    for(int i = n; i > 0; i /= 10)
    {
        int digit = i % 10;
        if(digit == 0)
        {
            flag = 1;
            break;
        }
    }
    char *result = (flag == 1)? "duck number ":"not duck";
    printf("%s", result);
    
    return 0;
}