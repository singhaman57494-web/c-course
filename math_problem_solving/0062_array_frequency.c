//                     count haw many times a numbers appears in the array

#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the numer : ");
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter the key : ");
    scanf("%d", &key);

    int count = 0;
    for (int j = 0; j < 10; j++)
    {
        if (key == arr[j])
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("not match key ");
    }
    else
    {
        printf("key appears %d times ", count);
    }

    return 0;
}