# include <stdio.h>

int main()
{
    int n;
    printf("enter your number : ");
    scanf("%d", &n);

    int original = n;

    int reverse = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        reverse = reverse * 10 + (i % 10);
    }
    
    char *result = (reverse == original)? "polindrome" : "not polindrome";
    printf("%s", result);
    return 0;
}