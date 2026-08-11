//                          difference between main diagonal and secondary diagonal

#include <stdio.h>


int main()
{
    int arr[3][3] = {{2, 6, 4}, {7, 5, 12}, {8, 2, 15}};

    int mainsum = 0;
    int secsum = 0;
    for (int i = 0; i < 3; i++)
    {
        mainsum += arr[i][i];
        secsum += arr[i][2 - i];
    }
    int difference = mainsum - secsum;
    if(difference < 0)
    {
        difference = - difference;
    }
    printf("the diagonal difference is : %d", difference);

    return 0;
    
}