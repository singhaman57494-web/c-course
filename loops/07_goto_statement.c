//                          goto statement in c

/*
1. also called jump statement in c

2. used to transfer program control to a predefined label.

3. its use is avoided since it causes confusion for the fellow 
programmers in understanding the code.

4. goto statement is preferable when we need to break multiple loops 
using a single statement at the same time .

*/

#include <stdio.h>

int main ()
{

    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);

        int num;

        for(int j = 0; j < 8; j++)
        {
            printf("enter the number. enter 0 to exit!\n");
            scanf("%d", &num);
            if(num == 0)
            {
                goto end;
            }
        }
    }
    end:

    return 0;
}