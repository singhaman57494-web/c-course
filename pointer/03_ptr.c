//                   pointer return address

#include <stdio.h>

int main ()
{
    int n = 44;
    int *ptr = &n;

    printf("the address is : %p\n", &ptr);
    printf("the vale of ptr is : %d\n", *ptr);

    return 0;
}