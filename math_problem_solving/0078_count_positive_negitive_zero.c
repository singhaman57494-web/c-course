//                     count positive negitive & zero an a array

#include <stdio.h>


int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number : ");
        scanf("%d", &num[i]);
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int j = 0; j < 10; j++)
    {
        if(num[j] > 0)
        {
            positive++;
        }
        else if(num[j] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("positive is %d times\n", positive);
    printf("negitive is %d times\n",negative );
    printf("zero is %d times\n", zero);
    
    return 0;
}