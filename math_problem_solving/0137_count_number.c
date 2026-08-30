//                    count number of digit using recursion 

#include <stdio.h>

int countnum(int num, int count)
{
    if (num == 0)
        return count;

    return countnum(num / 10, count + 1);
}

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", countnum(num, 0));

    return 0;
}