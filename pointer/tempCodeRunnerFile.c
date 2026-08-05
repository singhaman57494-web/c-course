#include <stdio.h>

int main ()
{
    int arr[] = {4, 5, 7, 9};

    printf("the value address of first element of the array is :%d\n", *(&arr[0]));
    printf("the value at address of first element of the array is :%d\n", *(arr));
    printf("the value at address of second element :%d\n", *(&arr[1]));
    printf("the value at address of second element :%d\n", arr[1]);  //   without *() using return same value 
    printf("the value at address of third element :%d\n", *(arr + 2));

    return 0;
}
