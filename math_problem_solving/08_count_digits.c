//                       count digits

# include <stdio.h>

int main ()
{
    int n ;
    printf("enter the number :");
    scanf("%d", &n);


    int count = 0;

    for(int i = n; i > 0; i = i/10)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}