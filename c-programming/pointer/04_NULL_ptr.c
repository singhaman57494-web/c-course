//                                 null pointer in c

#include <stdio.h>

int main ()
{
    int num = 10;
    int *ptr= NULL;

    printf("the value is : %d\n", *ptr);
    printf("the address is : %p", ptr);

    return 0;

}