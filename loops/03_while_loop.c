//                       while loop in c

# include <stdio.h>

int main ()
{
    int n = 1;

    while( n < 10)
    {
        printf("%d\n",n);
        n = n + 1;
    }

    return 0;
}

//                     print table using while loop

# include <stdio.h>

int main ()
{
    int num;
    printf("enter the num : ");
    scanf("%d", &num);
    int n = 1;

    while(n < 11)
    {
        printf("%d\n", num * n);
        n = n + 1;
    }
    return 0;
}