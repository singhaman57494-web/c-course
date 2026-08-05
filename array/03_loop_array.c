//                   loop using array

#include <stdio.h>

int main ()
{
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks : ");
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the marks is %d\n", marks[i]);
    }
    

    return 0;
    
}