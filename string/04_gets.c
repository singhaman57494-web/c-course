//                           guts use given input from user

#include <stdio.h>


int main()
{
    char word[20];

    printf("enter the word :");
    gets(word);      // input from user
    printf("%s", word);
    
    return 0;
}