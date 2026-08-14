//                 CONTINUE STATEMENT

/*
1. used to bring the program control to the next iteration of the loop.
2. the continue statement skips some code inside the loop and continues with 
the next iteration.
3. it is mainly used for a condition so that we can skip some lines of code for a 
particular condition.

*/

#include <stdio.h>

int main()
{
    int i , age;

    for(i = 0; i < 10; i++)
    {
        printf("%d\n enter the age : \n", i);
        scanf("%d", &age);
    
        if(age > 18)
        {
            continue;
        }
        printf("you cannot vote\n");
        printf("you cannot drive\n");
    }
    return 0;
}