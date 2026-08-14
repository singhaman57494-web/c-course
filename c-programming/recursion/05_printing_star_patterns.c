//                       printing star pattern in c

// take input from the user ask user to choose 0 for triangular star pattern and 1 for reverse triangular star pattern
// than print the pattern accordingly.

#include <stdio.h>

int starinput(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int rev_starinput(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int k = i; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n, type;
    printf("enter 0 for star pattern and 1 for reverse star pattern\n: ", &type);
    scanf("%d", &type);

    printf("how many rows do you want? : ");
    scanf("%d", &n);

    switch (type)
    {
    case 0:
        starinput(n);
        break;

    case 1:
        rev_starinput(n);
        break;

    default:
        printf("you have enterd invalid choice ");
        break;
    }

    return 0;
}