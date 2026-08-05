//            do while loop in c

#include <stdio.h>

int main()
{
    int num , i = 0;

    printf("enter the number : ");
    scanf("%d", &num);

    do{
        i = i + 1;
        printf("%d\n", i);
    }while(i < num);

    return 0;
}

//                   sum of numbers using do whle loop

# include <stdio.h>

int main ()
{
    int n = 1;

    int sum = 0;
    do
    {
        sum = sum + n;
        n++;
    }while(n <= 5);
    printf("%d\n", sum);
    return 0;
}