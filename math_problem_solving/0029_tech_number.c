//                               tech number

# include <stdio.h>

int main ()
{
    int num;

    printf("enter the number : ");
    scanf("%d", &num);
    int n = num;

    int count = 0;
    for(int i = n; i > 0; i = i / 10)
    {
        count++;
    }

    if(count % 2 == 1)
    {
        printf("not tech number");
    }
    else
    {
        int half = count / 2;
        int power = 1;

        for(int i = 1; i <= half; i++)
        {
            power = power * 10;
        }
        int first = num / power;
        int second = num % power;

        int sum = first + second;
        int square = sum * sum;

        if(square == n)
        {
            printf("tech");
        }
        else
        {
            printf("not tech");
        }
    }
    return 0;
}