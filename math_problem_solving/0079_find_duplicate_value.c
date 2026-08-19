//                          find the duplicate value in a array

#include <stdio.h>


int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &arr[i]);
    }
    int visited[10] ={0};
    for(int j = 0; j < 10; j++)
    {
        if(visited[j] == 1)
        {
            continue;
        }
        int count = 1;
        for (int k = j + 1; k < 10; k++)
        {
            if(arr[j] == arr[k])
            {
                count++;
                visited[k] = 1;
            }
        }
        if(count > 1)
        {
            printf("%d is appears %d times.\n", arr[j], count);
        }
        
    }
    
    return 0;
}