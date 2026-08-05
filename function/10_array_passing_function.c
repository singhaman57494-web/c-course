//                          passing array as function arguments

// #include <stdio.h>

// int func1(int array[])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d\nis %d\n",i, array[i]);
//     }
//     array[0] = 54; // very inportent point
//     return 0;
// }

// int main()
// {
//     int arr[] = {23, 13, 3, 4};
//     printf("the value of index 0 is %d\n", arr[0]);

//     func1(arr);
//     printf("the value of index 0 is %d\n", arr[0]);
//     return 0;
// }

//                                    pointer arithmetic

#include <stdio.h>

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d\n", *(ptr + i));
    }
}

int main()
{
    int arr[] = {23, 13, 3, 4};

    func2(arr);
    return 0;
}

//                                    muti-Dimainsional array

#include <stdio.h>

void function(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[2][2] = {{2, 9}, {5, 11,}};

    function(arr);

    return 0;
}