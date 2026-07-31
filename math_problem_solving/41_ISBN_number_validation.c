//                  ISBN number validation
// check program of this number :0201314525

#include <stdio.h>
#include <string.h>

// int main ()
// {
//     char isbn[11];

//     printf("enter the numbers : ");
//     scanf("%s", isbn);

//     int sum = 0;
//     for(int i = 0; i < 10; i++)
//     {
//         int digit = isbn[i] -'0';
//         int position = i + 1;
        
//         sum +=  position * digit; 
//     }
//     char *result = (sum % 11 == 0)? "valid ISBN":"invalid ISBN";
//     printf("%s", result);

//     return 0;
// }

int main ()
{
    int n = 5;
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("%c", '*' );
        }
        printf("\n");
    }

    return 0;
}