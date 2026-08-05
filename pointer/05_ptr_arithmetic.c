//                                  pointer arithmetic in c

//                       addition in pointer

#include <stdio.h>

int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d", ptra+1); // add size of int 
    return 0;
}

//                  addition of character

#include <stdio.h>

int main()
{
    char n = '3';
    char *ptr = &n;

    printf("%d\n", ptr);
    printf("%d", ptr+2);
    return 0;
}

//                   ptr++;


#include <stdio.h>

int main()
{
    char n = '3';
    char *ptr = &n;
    printf("%d\n", ptr);
    ptr++;

    printf("%d\n", ptr);
    printf("%d", ptr-2);
    return 0;
    
}


//                       ptr--

#include <stdio.h>

int main()
{
    char n = '3';
    char *ptr = &n;
    printf("%d\n", ptr);
    ptr--;

    printf("%d\n", ptr);
    printf("%d", ptr-2);
    return 0;
    
}

//             subtraction of character address

#include <stdio.h>

int main()
{
    char n = '3';
    char *ptr = &n;

    printf("%d\n", ptr);
    printf("%d", ptr-2);
    return 0;
}