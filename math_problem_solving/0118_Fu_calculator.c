//                       create a calculator using function

#include <stdio.h>

float calculate(float a, float b, char *operator)
{
    
    switch (*operator)
    {
    case '+':
        return a + b;

    case '-':
        return a - b;

    case '*':
        return a * b;

    case '/':
        return a / b;
    
    case '%':
        return (int)a % (int)b;

    default:
        printf("enter wrong operator : ");
    }

    
}

int main()
{
    int a, b;
    char operator;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter the operator : ");
    scanf(" %c", &operator);
    printf("enter second number : ");
    scanf("%d", &b);
   

    float ans = calculate(a, b, &operator);
    printf("result is : %.2f\n", ans);

    return 0;
}