//                palindrome in c 

# include <stdio.h>

int main ()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    int original = n;

    int reverse = 0;
    for(int i = n; i > 0; i = i/10)
    {
        reverse = reverse * 10 + (i % 10);
    }
    if(reverse == original)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}