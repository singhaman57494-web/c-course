//                          sum of main diagonal element of matrix

#include <stdio.h>


int main()
{
    int matrix[3][3] = {{3, 7, 9}, {4, 9, 6}, {4, 2, 5}};

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += matrix[i][i];
    }
    printf("main diagonal sum = %d", sum);
    
    return 0;
}