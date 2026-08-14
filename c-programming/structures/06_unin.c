//                                      union 
#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name [34];
};

int main()
{
    union Student s1;
    strcpy(s1.name, "vikram");
    s1.fav_char = 'A';
    s1.id = 4;
    s1.marks = 48;

    printf("name is : %s\n", s1.name);
    printf("id is %d\n", s1.id);
    printf("marks is %d\n", s1.marks);
    printf("favchar is %c\n", s1.fav_char);

    return 0;
}