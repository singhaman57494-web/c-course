//                                 string comparision 

#include <stdio.h>
#include <string.h>


int main()
{
    char password[] = "rahul@gmail.com";
    char match[] = "rahul@gmail.com";

    if(strcmp(password, match) == 0)
    {
        printf("login successfully");
    }
    else
    {
        printf("not match try again");
    }
    return 0;
}