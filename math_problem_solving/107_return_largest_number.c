//                        return largest of two number entered by user using function

#include <stdio.h>

int return_max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2;
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);

    int result = return_max(num1, num2);
    if (num1 == result)
    {
        printf("first is big : %d\n", num1);
    }
    else
    {
        printf("second is big : %d\n", num2);
    }

    return 0;
}