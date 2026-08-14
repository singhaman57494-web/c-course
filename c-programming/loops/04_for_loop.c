//                 for loop in c 
//                 print one to ten numbers

# include <stdio.h>

int main ()
{
    int i, j ;
    for(int i = 1, j = 0; i < 10; i++)
    {
        printf("%d %d\n", j,i);
    }

    return 0;
}

//               print even number 1 to n using for loop

# include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}