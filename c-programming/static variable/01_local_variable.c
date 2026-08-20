//                           local variable in c programming

/*
1. scope is a region of the program where a defined variable can exist and beyond which
   it cannot be accessed.

2. variable which are accessed inside a function or a block are called local variables.

3. they can only be accessed by the function they are declared in!

4. they are inaccessible to the functions outside the function they are dwclared in!
*/

#include <stdio.h>

int func1()
{
    return 34;
}

int main()
{
    printf("the value of func1 is :%d", func1());
    return 0;
}