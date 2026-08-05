//                           syntax of array in c 

#include <stdio.h>

int main ()
{
    int marks [4];
    marks[0] = 34;

    printf("Marks of student 1 is %d\n", marks[0]);

    marks[2] = 48;
    printf("Marks of student 2 is %d\n", marks[2]);

    marks[3] = 65;
    printf("Marks of student 3 is %d\n", marks[3]);

    marks[4] = 88;
    printf("Marks of student 4 is %d\n", marks[4]);
    return 0;
}