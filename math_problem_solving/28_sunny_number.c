//                              print sunny number

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    int check = n + 1;
    int flag = 0;
    for(int i = 1; i <= check; i++)
    {
        if(i * i == check)
        {
            flag = 1;
            break;
        }
    }
    char *result = (flag == 1)? "sunny number" : "not sunny number" ;
    printf("%s", result);
    return 0;

}