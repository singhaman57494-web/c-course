//             return positive negitive and zero using function

#include <stdio.h>

int checkNumber(int n)
{
    if (n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int value;
    printf("enter the value : ");
    scanf("%d", &value);

    int final = checkNumber(value);

    if (final == 1)
    {
        printf("positive : %d\n", value);
    }
    else if (final == -1)
    {
        printf("negative : %d\n", value);
    }
    else
    {
        printf("zero : %d", value);
    }

    return 0;
}