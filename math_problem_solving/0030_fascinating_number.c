//                    fascinating number 

# include <stdio.h>

int main ()
{
    int nums;
    printf("enter the number of 3 digits : ");
    scanf("%d", &nums);


    int n = nums;
    if(n < 100 || n > 999)
    {
        printf("not a 3- digit number ");
        return 0;
    }

    int two = n * 2;
    int three = n * 3;

    int freq[10] = {0};

    int temp = n;

    while(temp > 0)
    {
        int digit = temp % 10;
        if(digit == 0);
        {
            printf("not fascinating number");
            return 0;
        }
        freq[digit]++;
        temp /= 10;
    }
    temp = two;
    while(temp > 0)
    {
        int digit = temp % 10;
        if(digit == 0)
        {
            printf("not fascinating number ");
            return 0;
        }
        freq[digit]++;
        temp /= 10;
    }
    temp = three;
    while(temp > 0)
    {
        int digit = temp % 10;
        if(digit == 0);
        {
            printf("not fascinating number");
            return 0;
        }
        freq[digit]++;
        temp /= 10;
    }
    for(int i = 1; i <= 9; i++)
    {
        if(freq[i] != 1)
        {
            printf("not fascinating number ");
            return 0;
        }
    }
    printf("fascinating number ");
    return 0;
}