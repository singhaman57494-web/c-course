//                                return the number is palindrome and not palindrome

#include <stdio.h>

int Palindrome_number(int number)
{

    int reverse = 0;
    for (int i = number; i > 0; i /= 10)
    {
        reverse = reverse * 10 + (i % 10);
    }
    return reverse;
}

int main()
{
    int number;
    printf("enter a n digits number : ");
    scanf("%d", &number);

    int original = number;

    int ans = Palindrome_number(number);
    if (ans == original)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}