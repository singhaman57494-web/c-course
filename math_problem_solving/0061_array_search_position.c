//                          search an element and print its position (index)

#include <stdio.h>


int main()
{
    int user[10];
    for(int i = 0; i < 10; i++)
    {
        printf("enter the number :");
        scanf("%d", &user[i]);
    }
    int key;
    printf("enter the key : ");
    scanf("%d", &key);

    int found = 0;
    for(int f = 0; f < 10; f++)
    {
        if(user[f] == key)
        {
            printf("found at index %d\n", f);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("not found\n");
    }
    return 0;
}