//                           array and pointer 


//                            print address
#include <stdio.h>


int main()
{
    int arr[] = {2, 3, 3, 5};
    printf("value at position one is :%d\n", arr[0]);
    printf("the address of first element :%d\n", &arr[0]);
    printf("the address of first elelement :%d\n", arr);
    printf("the address of second element :%d\n", &arr[1]);
    printf("the address of second element :%d\n", arr + 1);

    return 0;

}


 //                    value of address

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
