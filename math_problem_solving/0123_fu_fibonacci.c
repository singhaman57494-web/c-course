//                    print fibonacci series using function

#include <stdio.h>

void fibonacci(int num)
{
    int first = 0;
    int second = 1;

    for(int i = 0; i < num; i++)
    {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}