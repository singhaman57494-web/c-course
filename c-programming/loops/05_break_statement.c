//                           break statement in c
/*
1. used to bring the program control out of the loop.
2. the break statement is used inside loops or switch statement.
3. break statement can be used with
. loops
. switch case expressions.

*/

# include <stdio.h>

int main ()
{
    int i ,age;
    for(i = 0; i < 10; i++)
    {
        printf("%d\nenter the age :\n", i);
        scanf("%d", &age);
        if(age > 18)
        {
            break;

        }
    }
    
    return 0;
}