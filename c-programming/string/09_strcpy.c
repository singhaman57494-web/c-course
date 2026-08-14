//                          copy string 

#include <stdio.h>
#include <string.h>


int main()
{
    char name[] = "harry";
    char name2[] = "rohit";

    strcpy(name, name2);
    puts(name);
    
    return 0;
}