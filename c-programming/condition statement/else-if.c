//             else if conditional statement

# include <stdio.h>
# include <string.h>

int main ()
{
    char color[20];

    printf("enter light color : ");
    scanf("%s", color);

    if(strcmp(color, "red") == 0)
    {
        printf("stop");
    }
    else if(strcmp(color, "yellow") == 0)
    {
        printf("watch");
    }
    else if(strcmp(color, "green") == 0)
    {
        printf("go");
    }
    else
    {
        printf("light is broken");
    }
    return 0;
}