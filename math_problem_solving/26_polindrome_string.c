//                       printf polindrome string

# include <stdio.h>
# include <string.h>

int main ()
{
    char word[40];
    printf("enter the word : ");
    scanf("%s", word);

    int len = strlen(word);
    
    int flag = 1;
    for(int i = 0; i < len / 2; i++)
    {
        if(word[i] != word[len - 1 -i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("polindrome");
    }
    else
    {
        printf("not polindrome");
    }
    return 0;
}