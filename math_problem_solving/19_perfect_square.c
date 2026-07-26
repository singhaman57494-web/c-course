//                              perfect square 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter number : ");
    scanf("%d", &n);

    int square = 1;

    for(int i = 1; i < n; i++)
    {
        if(i * i == n)
        {
            square = 1;  // 0 = not found, 1 = found
            break;
        }
    }
    if(square == 1)
    {
        printf("perfect square");
    }
    else
    {
        printf("not perfect square");
    }
    return 0;
}