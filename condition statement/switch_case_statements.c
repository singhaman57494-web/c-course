//                     switch case control statements in c

# include <stdio.h>

int main ()
{
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    switch(age)
    {
        case 3 :
            printf("match your age is 3");
            break;

        case 13:
            printf("match your age is 13");
            break;

        case 23:
            printf("match your age is 23 ");
            break;

        default:
            printf("your age is no match : ");
            break;

    }
    return 0;
}