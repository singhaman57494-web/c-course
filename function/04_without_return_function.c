//                    with argument without return function

# include <stdio.h>

void printstar(int n) // with argument 
{
    for(int i = 1; i <= n; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    printstar(9);
    return 0;
}