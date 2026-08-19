//                         tech number (general solution)
// example:- 2025, 3025 , 4942029

#include <stdio.h>

int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int count = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        count++;
    }
    if(count % 2 == 1)
    {
        printf("not tech number ");
    }
    else
    {
        int half = count / 2;
        int power = 1;
        for(int i = 1; i <= half; i++)
        {
            power = power * 10;
        }
        int first = n / power;
        int second = n % power;

        int sum = first + second;
        int square = sum * sum;

        char *result = (square == n)? "tech number ": "not tech";
        printf("%s", result);
    }
    

    return 0;
}