//                       static variable in c programming

/*
1. static variables are variables which have a property of perserving their values even when they go out to space.

2. they perserve their value from the previous scope and are not initialized again.

3. staatic variable remains in memory throughout the span of the program.

4. static variable are initialized to 0 if not initialized explicitly.

5. in c, static variables can only be initialized using constant literals.

*/

#include <stdio.h>

int b = 34;
int func1(int b1)
{
    static int myvar = 0;
    printf("the value of myvar : %d\n", myvar);
    myvar++;
    return b + myvar;
}
int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    int *ptr = &val;
    
    return 0;
}