//                               linear search array

#include <stdio.h>


int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &n[i]);
    }
    int key;
    printf("enter the key : ");
    scanf("%d", &key);

    int flag = 0;

    for (int i = 0; i < 10; i++)
    {
        if(key == n[i])
        {
            flag = 1;
            break;
        }
    }
    char *result = (flag == 1)?"found": "not found";
    printf("%s", result);
    
    
    return 0;
}