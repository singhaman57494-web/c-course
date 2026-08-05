//                       printing star pattern in c

// take input from the user ask user to choose 0 for triangular star pattern and 1 for reverse triangular star pattern
// than print the pattern accordingly.

#include <stdio.h>

int main()
{
    int n;
    while (n > 0)
    {
        printf("enter the number : ");
        scanf("%d", &n);

        int choise;
        printf("enter your choise (0 | 1 | 9 ): ");
        scanf("%d", &choise);

        if (choise == 1) // 1 -> triangular
        {

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else if (choise == 0) // reverse triangular
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
        else if (choise == 9) //  9 is end
        {
            break;
        }
        else
        {
            printf("your choise not match !try again \n");
        }
    }
    return 0;
}