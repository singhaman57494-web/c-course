//                            pronic number in c
//    example :- 6 , 12

# include <stdio.h>

int main ()
{
    int n; 
    printf("enter the number : ");
    scanf("%d", &n);

    int flag = 0;
    for(int i = 0; i <= n; i++)
    {
        if( i * (i + 1)==n)
        {
            flag = 1;
            break;
        }
        if(i * (i + 1) > n)
        {
            break;
        }
    }
    if(flag == 1)
    {
        printf("pronic");
    }
    else
    {
        printf("not pronic");
    }
    return 0;
}